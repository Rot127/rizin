#!/usr/bin/env python3

import argparse
import os
import sys
import yaml

CMDDESCS_C_TEMPLATE = """// SPDX-License-Identifier: LGPL-3.0-only
//
// WARNING: This file was auto-generated by cmd_descs_generate.py script. Do not
// modify it manually. Look at cmd_descs.yaml if you want to update commands.
//

#include "cmd_descs.h"

{helps_declarations}

{helps}
RZ_IPI void newshell_cmddescs_init(RzCore *core) {{
\tRzCmdDesc *root_cd = rz_cmd_get_root(core->rcmd);
{init_code}
}}
"""

CMDDESCS_H_TEMPLATE = """// SPDX-License-Identifier: LGPL-3.0-only
//
// WARNING: This file was auto-generated by cmd_descs_generate.py script. Do not
// modify it manually. Look at cmd_descs.yaml if you want to update commands.
//

#include <rz_cmd.h>
#include <rz_core.h>
#include <rz_util.h>

// Command handlers, manually defined somewhere else
{handlers_declarations}

// Main function that initialize the entire commands tree
RZ_IPI void newshell_cmddescs_init(RzCore *core);
"""

DESC_HELP_DETAIL_ENTRY_TEMPLATE = '''\t{{ .text = {text}, .arg_str = {arg_str}, .comment = {comment} }}'''
DESC_HELP_DETAIL_ENTRIES_TEMPLATE = '''static const RzCmdDescDetailEntry {cname}[] = {{
{entry}
}};
'''

DESC_HELP_DETAIL_TEMPLATE = '''\t{{ .name = {name}, .entries = {entries} }}'''
DESC_HELP_DETAILS_TEMPLATE = '''static const RzCmdDescDetail {cname}[] = {{
{details}
}};
'''
DECL_DESC_HELP_DETAILS_TEMPLATE = 'static const RzCmdDescDetail {cname}[{size}];'

DESC_HELP_ARG_CHOICES = 'static const char *{cname}[] = {{ {choices} }};\n'
DESC_HELP_ARG_UNION_CHOICES = '\t\t.choices = {choices},\n'
DESC_HELP_ARG_TEMPLATE_FLAGS = '\t\t.flags = {flags},\n'
DESC_HELP_ARG_TEMPLATE_OPTIONAL = '\t\t.optional = {optional},\n'
DESC_HELP_ARG_TEMPLATE_NO_SPACE = '\t\t.no_space = {no_space},\n'
DESC_HELP_ARG_TEMPLATE_DEFAULT_VALUE = '\t\t.default_value = {default_value},\n'
DESC_HELP_ARG_TEMPLATE = '''\t{{
\t\t.name = {name},
\t\t.type = {type},
{flags}{optional}{no_space}{default_value}{union}
\t}}'''
DESC_HELP_ARGS_TEMPLATE = '''static const RzCmdDescArg {cname}[] = {{
{args}
}};
'''
DECL_DESC_HELP_ARGS_TEMPLATE = 'static const RzCmdDescArg {cname}[{size}];'

DESC_HELP_TEMPLATE_DESCRIPTION = '\t.description = {description},\n'
DESC_HELP_TEMPLATE_ARGS_STR = '\t.args_str = {args_str},\n'
DESC_HELP_TEMPLATE_USAGE = '\t.usage = {usage},\n'
DESC_HELP_TEMPLATE_OPTIONS = '\t.options = {options},\n'
DESC_HELP_TEMPLATE_DETAILS = '\t.details = {details},\n'
DESC_HELP_TEMPLATE_ARGS = '\t.args = {args},\n'
DESC_HELP_TEMPLATE = '''static const RzCmdDescHelp {cname} = {{
\t.summary = {summary},
{description}{args_str}{usage}{options}{details}{args}}};
'''

DEFINE_OLDINPUT_TEMPLATE = '''
\tRzCmdDesc *{cname}_cd = rz_cmd_desc_oldinput_new(core->rcmd, {parent_cname}_cd, {name}, {handler_cname}, &{help_cname});
\trz_warn_if_fail({cname}_cd);'''
DEFINE_ARGV_TEMPLATE = '''
\tRzCmdDesc *{cname}_cd = rz_cmd_desc_argv_new(core->rcmd, {parent_cname}_cd, {name}, {handler_cname}, &{help_cname});
\trz_warn_if_fail({cname}_cd);'''
DEFINE_ARGV_MODES_TEMPLATE = '''
\tRzCmdDesc *{cname}_cd = rz_cmd_desc_argv_modes_new(core->rcmd, {parent_cname}_cd, {name}, {modes}, {handler_cname}, &{help_cname});
\trz_warn_if_fail({cname}_cd);'''
DEFINE_GROUP_TEMPLATE = '''
\tRzCmdDesc *{cname}_cd = rz_cmd_desc_group_new(core->rcmd, {parent_cname}_cd, {name}, {handler_cname}, {help_cname_ref}, &{group_help_cname});
\trz_warn_if_fail({cname}_cd);'''
DEFINE_GROUP_MODES_TEMPLATE = '''
\tRzCmdDesc *{cname}_cd = rz_cmd_desc_group_modes_new(core->rcmd, {parent_cname}_cd, {name}, {modes}, {handler_cname}, {help_cname_ref}, &{group_help_cname});
\trz_warn_if_fail({cname}_cd);'''
DEFINE_INNER_TEMPLATE = '''
\tRzCmdDesc *{cname}_cd = rz_cmd_desc_inner_new(core->rcmd, {parent_cname}_cd, {name}, &{help_cname});
\trz_warn_if_fail({cname}_cd);'''
DEFINE_FAKE_TEMPLATE = '''
\tRzCmdDesc *{cname}_cd = rz_cmd_desc_fake_new(core->rcmd, {parent_cname}_cd, {name}, &{help_cname});
\trz_warn_if_fail({cname}_cd);'''

CD_TYPE_OLDINPUT = 'RZ_CMD_DESC_TYPE_OLDINPUT'
CD_TYPE_GROUP = 'RZ_CMD_DESC_TYPE_GROUP'
CD_TYPE_ARGV = 'RZ_CMD_DESC_TYPE_ARGV'
CD_TYPE_ARGV_MODES = 'RZ_CMD_DESC_TYPE_ARGV_MODES'
CD_TYPE_FAKE = 'RZ_CMD_DESC_TYPE_FAKE'
CD_TYPE_INNER = 'RZ_CMD_DESC_TYPE_INNER'

CD_VALID_TYPES = [CD_TYPE_OLDINPUT, CD_TYPE_GROUP, CD_TYPE_ARGV, CD_TYPE_ARGV_MODES, CD_TYPE_FAKE, CD_TYPE_INNER]

def escape(s):
    return s.replace('\\', '\\\\').replace('"', '\\"')

def strornull(s):
    return '"' + escape(s) + '"' if s is not None else 'NULL'

def strip(s):
    return s.strip('\n') if s is not None else None

def compute_cname(name):
    if name == "":
        return "empty"

    name = name.translate(str.maketrans({
        '.': '_dot_',
        '*': '_star_',
        '>': '_greater_',
        '<': '_minor_',
        '-': '_minus_',
        '+': '_plus_',
        '=': '_equal_',
        '$': '_dollar_',
        '?': '_question_',
        '/': '_slash_',
        '\\': '_backslash_',
        '&': '_and_',
        '!': '_escl_',
        '#': '_hash_',
        ' ': '_space_',
    }))
    if name.startswith('_'):
        name = name[1:]

    return name

def flat(l):
    if l is None:
        return []
    if type(l) != list:
        return [l]

    out = []
    for i in l:
        out += flat(i)
    return out

class Arg(object):
    def __init__(self, cd, c):
        if 'name' not in c or 'type' not in c:
            print('Argument of %s should have `name`/`type` fields' % (cd.name,))
            sys.exit(1)

        self.cd = cd
        # RzCmdDescArg fields
        self.name = c['name']
        self.flags = c.get('flags')
        self.optional = c.get('optional')
        self.no_space = c.get('no_space')
        self.type = c['type']
        self.default_value = c.get('default_value')
        self.choices = c.get('choices')

    def _get_choices_cname(self):
        if self.type == 'RZ_CMD_ARG_TYPE_CHOICES':
            return self.cd.cname + '_' + compute_cname(self.name) + '_choices'

        raise Exception('_get_choices_cname should be called on ARG_TYPE_CHOICES only')

    def _get_union(self):
        if self.type == 'RZ_CMD_ARG_TYPE_CHOICES':
            return DESC_HELP_ARG_UNION_CHOICES.format(
                choices=self._get_choices_cname()
            )
        return ''

    def __str__(self):
        flags = DESC_HELP_ARG_TEMPLATE_FLAGS.format(flags=self.flags) if self.flags is not None else ''
        optional = DESC_HELP_ARG_TEMPLATE_OPTIONAL.format(optional='true' if self.optional else 'false') if self.optional is not None else ''
        no_space = DESC_HELP_ARG_TEMPLATE_NO_SPACE.format(no_space='true' if self.no_space else 'false') if self.no_space is not None else ''
        default_value = DESC_HELP_ARG_TEMPLATE_DEFAULT_VALUE.format(default_value=strornull(self.default_value)) if self.default_value is not None else ''
        return DESC_HELP_ARG_TEMPLATE.format(
            name=strornull(self.name),
            type=self.type,
            flags=flags,
            optional=optional,
            no_space=no_space,
            default_value=default_value,
            union=self._get_union(),
        )

    def get_cstructure(self):
        if self.type == 'RZ_CMD_ARG_TYPE_CHOICES':
            return DESC_HELP_ARG_CHOICES.format(
                cname=self._get_choices_cname(),
                choices=', '.join(['"%s"' % (x,) if x != 'NULL' else x for x in self.choices + ['NULL']])
            )
        else:
            return ''

class DetailEntry(object):
    def __init__(self, c):
        if 'text' not in c or 'comment' not in c:
            print('No `text`/`comment` fields for DetailEntry %s' % (c,))
            sys.exit(1)

        # RzCmdDescDetailEntry fields
        self.text = strip(c['text'])
        self.comment = strip(c['comment'])
        self.arg_str = strip(c.get('arg_str'))

    def __str__(self):
        return DESC_HELP_DETAIL_ENTRY_TEMPLATE.format(
            text=strornull(self.text),
            arg_str=strornull(self.arg_str),
            comment=strornull(self.comment),
        )

class Detail(object):
    def __init__(self, cd, c):
        if 'name' not in c or 'entries' not in c:
            print('No `name`/`entries` fields for Detail %s' % (c,))
            sys.exit(1)

        self.cd = cd
        # RzCmdDescDetail fields
        self.name = strip(c['name'])
        self.entries = [DetailEntry(x) for x in c['entries']]

    def get_detail_entries_cname(self):
        return self.cd.cname + '_' + compute_cname(self.name) + '_detail_entries'

    def __str__(self):
        return DESC_HELP_DETAIL_TEMPLATE.format(
            name=strornull(self.name),
            entries=self.get_detail_entries_cname(),
        )

    def get_cstructure(self):
        return DESC_HELP_DETAIL_ENTRIES_TEMPLATE.format(
            cname=self.get_detail_entries_cname(),
            entry=',\n'.join([str(e) for e in self.entries] + ["\t{ 0 },"])
        )

class CmdDesc(object):
    c_cds = {}
    c_handlers = {}
    c_args = {}
    c_details = {}

    def __init__(self, c, parent=None, pos=0):
        self.pos = pos

        if not c:
            # used only for root node
            self.name = ''
            self.cname = 'root'
            self.summary = ''
            self.type = CD_TYPE_GROUP
            return

        if not c.get('name') or not c.get('summary'):
            print('No `name`/`summary` fields in', c)
            sys.exit(1)

        # RzCmdDesc fields
        self.name = c['name']
        self.cname = c.get('cname') or compute_cname(self.name)
        self.type = None
        self.parent = parent
        self.subcommands = None
        self.exec_cd = None
        self.modes = c.get('modes')
        self.handler = c.get('handler')
        # RzCmdDescHelp fields
        self.summary = strip(c['summary'])
        self.description = strip(c.get('description'))
        self.args_str = strip(c.get('args_str'))
        self.usage = strip(c.get('usage'))
        self.options = strip(c.get('options'))
        self.details = None
        self.details_alias = None
        self.args = None
        self.args_alias = None

        if 'details' in c and type(c['details']) == list:
            self.details = [Detail(self, x) for x in c.get('details', [])]
        elif 'details' in c and type(c['details']) == str:
            self.details_alias = c['details']

        if 'args' in c and type(c['args']) == list:
            self.args = [Arg(self, x) for x in c.get('args', [])]
        elif 'args' in c and type(c['args']) == str:
            self.args_alias = c['args']

        # determine type before parsing subcommands, so children can check type of parent
        if 'type' in c:
            self.type = c['type']
        elif c.get('subcommands'):
            self.type = CD_TYPE_GROUP
        elif self.modes:
            self.type = CD_TYPE_ARGV_MODES
        else:
            self.type = CD_TYPE_ARGV

        if 'subcommands' in c:
            self.subcommands = [CmdDesc(x, self, i) for i, x in enumerate(c.get('subcommands', []))]
        # handle the exec_cd, which is a cd that has the same name as its parent
        if self.subcommands and self.subcommands[0].name == self.name and self.subcommands[0].type not in [CD_TYPE_INNER, CD_TYPE_FAKE]:
            self.exec_cd = self.subcommands[0]

        self._validate()
        CmdDesc.c_cds[self.cname] = self
        if self.get_handler_cname():
            CmdDesc.c_handlers[self.get_handler_cname()] = self
        if self.args:
            CmdDesc.c_args[CmdDesc.get_arg_cname(self)] = self
        if self.details:
            CmdDesc.c_details[CmdDesc.get_detail_cname(self)] = self

    def _validate(self):
        if self.type not in CD_VALID_TYPES:
            print('Command %s does not have a valid type.' % (self.name,))
            sys.exit(1)

        if self.type in [CD_TYPE_ARGV, CD_TYPE_ARGV_MODES, CD_TYPE_OLDINPUT] and not self.cname:
            print('Command %s does not have cname field' % (self.name,))
            sys.exit(1)

        if self.parent and self.parent.name == self.name and self.pos != 0 and self.type not in [CD_TYPE_INNER, CD_TYPE_FAKE]:
            print('If a command has the same name as its parent, it can only be the first child. See parent of Command %s' % (self.cname,))
            sys.exit(1)

        if self.parent and self.parent.type not in [CD_TYPE_GROUP, CD_TYPE_INNER, CD_TYPE_OLDINPUT]:
            print('The parent of %s is of the wrong type' % (self.cname,))
            sys.exit(1)

        if self.cname in CmdDesc.c_cds:
            print('Another command already has the same cname as %s' % (self.cname,))
            sys.exit(1)

        if self.type in [CD_TYPE_ARGV, CD_TYPE_ARGV_MODES] and self.args is None and self.args_alias is None:
            print('Specify arguments for command %s' % (self.name,))
            sys.exit(1)

    def get_handler_cname(self):
        if self.type == CD_TYPE_ARGV or self.type == CD_TYPE_ARGV_MODES:
            return 'rz_' + (self.handler or self.cname) + '_handler'
        elif self.type == CD_TYPE_OLDINPUT:
            return 'rz_' + (self.handler or self.cname)
        else:
            return None

    @classmethod
    def get_arg_cname(cls, cd):
        return cd.cname + '_args'

    @classmethod
    def get_detail_cname(cls, cd):
        return cd.cname + '_details'

    def get_help_cname(self):
        return self.cname + '_help'

    def __str__(self):
        out = ''
        details_cname = None
        args_cname = None

        if self.details is not None:
            out += '\n'.join([d.get_cstructure() for d in self.details])
            out += DESC_HELP_DETAILS_TEMPLATE.format(
                cname=CmdDesc.get_detail_cname(self),
                details=',\n'.join([str(d) for d in self.details] + ["\t{ 0 },"]),
            )
            details_cname = CmdDesc.get_detail_cname(self)
        elif self.details_alias is not None:
            details_cname = self.details_alias + '_details'

        if self.args is not None:
            out += '\n'.join([a.get_cstructure() for a in self.args if a.get_cstructure() != ''])
            out += DESC_HELP_ARGS_TEMPLATE.format(
                cname=CmdDesc.get_arg_cname(self),
                args=',\n'.join([str(a) for a in self.args] + ["\t{ 0 },"])
            )
            args_cname = CmdDesc.get_arg_cname(self)
        elif self.args_alias is not None:
            args_cname = self.args_alias + '_args'

        description = DESC_HELP_TEMPLATE_DESCRIPTION.format(description=strornull(self.description)) if self.description is not None else ''
        args_str = DESC_HELP_TEMPLATE_ARGS_STR.format(args_str=strornull(self.args_str)) if self.args_str is not None else ''
        usage = DESC_HELP_TEMPLATE_USAGE.format(usage=strornull(self.usage)) if self.usage is not None else ''
        options = DESC_HELP_TEMPLATE_OPTIONS.format(options=strornull(self.options)) if self.options is not None else ''
        details = DESC_HELP_TEMPLATE_DETAILS.format(details=details_cname) if details_cname is not None else ''
        args = DESC_HELP_TEMPLATE_ARGS.format(args=args_cname) if args_cname is not None else ''
        out += DESC_HELP_TEMPLATE.format(
            cname=self.get_help_cname(),
            summary=strornull(self.summary),
            description=description,
            args_str=args_str,
            usage=usage,
            options=options,
            details=details,
            args=args,
        )

        if self.subcommands:
            out += '\n'.join([str(child) for child in self.subcommands])
        return out

    def _str_tab(self, tab=0):
        spaces = ' ' * tab
        out = ''
        out += spaces + 'Name: %s\n' % (self.name,)
        out += spaces + 'CName: %s\n' % (self.cname,)
        out += spaces + 'Summary: %s\n' % (self.summary,)
        if self.description:
            out += spaces + 'Description: %s\n' % (self.description,)
        if self.subcommands:
            out += spaces + 'Subcommands:\n'
            for c in self.subcommands:
                out += c._str_tab (tab + 4)
                out += '\n'

        return out

    def __repr__(self):
        return self._str_tab()

def createcd(cd):
    if cd.type == CD_TYPE_ARGV:
        return DEFINE_ARGV_TEMPLATE.format(
            cname=cd.cname,
            parent_cname=cd.parent.cname,
            name=strornull(cd.name),
            handler_cname=cd.get_handler_cname(),
            help_cname=cd.get_help_cname(),
        )
    elif cd.type == CD_TYPE_ARGV_MODES:
        return DEFINE_ARGV_MODES_TEMPLATE.format(
            cname=cd.cname,
            parent_cname=cd.parent.cname,
            name=strornull(cd.name),
            modes=' | '.join(cd.modes),
            handler_cname=cd.get_handler_cname(),
            help_cname=cd.get_help_cname(),
        )
    elif cd.type == CD_TYPE_FAKE:
        return DEFINE_FAKE_TEMPLATE.format(
            cname=cd.cname,
            parent_cname=cd.parent.cname,
            name=strornull(cd.name),
            help_cname=cd.get_help_cname(),
        )
    elif cd.type == CD_TYPE_INNER:
        out = DEFINE_INNER_TEMPLATE.format(
            cname=cd.cname,
            parent_cname=cd.parent.cname,
            name=strornull(cd.name),
            help_cname=cd.get_help_cname(),
        )
        out += '\n'.join([createcd(child) for child in cd.subcommands or []])
        return out
    elif cd.type == CD_TYPE_OLDINPUT:
        out = DEFINE_OLDINPUT_TEMPLATE.format(
            cname=cd.cname,
            parent_cname=cd.parent.cname,
            name=strornull(cd.name),
            handler_cname=cd.get_handler_cname(),
            help_cname=cd.get_help_cname(),
        )
        out += '\n'.join([createcd(child) for child in cd.subcommands or []])
        return out
    elif cd.type == CD_TYPE_GROUP and cd.exec_cd and cd.exec_cd.type == CD_TYPE_ARGV_MODES:
        out = DEFINE_GROUP_MODES_TEMPLATE.format(
            cname=cd.cname,
            parent_cname=cd.parent.cname,
            name=strornull(cd.name),
            modes=' | '.join(cd.exec_cd.modes),
            handler_cname=cd.exec_cd.get_handler_cname(),
            help_cname_ref='&' + cd.exec_cd.get_help_cname(),
            group_help_cname=cd.get_help_cname(),
        )
        out += '\n'.join([createcd(child) for child in cd.subcommands[1:] or []])
        return out
    elif cd.type == CD_TYPE_GROUP:
        out = DEFINE_GROUP_TEMPLATE.format(
            cname=cd.cname,
            parent_cname=cd.parent.cname,
            name=strornull(cd.name),
            handler_cname=(cd.exec_cd and cd.exec_cd.get_handler_cname()) or 'NULL',
            help_cname_ref=(cd.exec_cd and '&' + cd.exec_cd.get_help_cname()) or 'NULL',
            group_help_cname=cd.get_help_cname(),
        )
        subcommands = (cd.exec_cd and cd.subcommands and cd.subcommands[1:]) or cd.subcommands
        out += '\n'.join([createcd(child) for child in subcommands or []])
        return out
    else:
        raise Exception('Not handled cd type')

def arg2decl(cd):
    return DECL_DESC_HELP_ARGS_TEMPLATE.format(cname=CmdDesc.get_arg_cname(cd), size=len(cd.args) + 1)

def detail2decl(cd):
    return DECL_DESC_HELP_DETAILS_TEMPLATE.format(cname=CmdDesc.get_detail_cname(cd), size=len(cd.details) + 1)

def handler2decl(type, handler_name):
    if type == CD_TYPE_ARGV:
        return 'RZ_IPI RzCmdStatus %s(RzCore *core, int argc, const char **argv);' % (handler_name,)
    elif type == CD_TYPE_ARGV_MODES:
        return 'RZ_IPI RzCmdStatus %s(RzCore *core, int argc, const char **argv, RzOutputMode mode);' % (handler_name,)
    elif type == CD_TYPE_OLDINPUT:
        return 'RZ_IPI int %s(void *data, const char *input);' % (handler_name,)
    else:
        return None


parser = argparse.ArgumentParser(description='Generate .c/.h files from Command Descriptors YAML file.')
parser.add_argument('--src-output-dir', type=str, required=False, help='Source output directory')
parser.add_argument('--output-dir', type=str, required=True, help='Output directory')
parser.add_argument('yaml_file', type=argparse.FileType("r"), help='Input YAML file containing all commands descriptions')

args = parser.parse_args()

commands_yml = yaml.safe_load(args.yaml_file)
root_cd = CmdDesc(None)
root_cds = [CmdDesc(c, root_cd) for c in commands_yml]

arg_decls = [arg2decl(cd) for cd in CmdDesc.c_args.values()]
detail_decls = [detail2decl(cd) for cd in CmdDesc.c_details.values()]
helps = [str(cd) for cd in root_cds]
init_code = [createcd(cd) for cd in root_cds]

cf_text = CMDDESCS_C_TEMPLATE.format(
    helps_declarations='\n'.join(detail_decls + arg_decls),
    helps='\n'.join(helps),
    init_code='\n'.join(init_code),
)
open(os.path.join(args.output_dir, 'cmd_descs.c'), 'w').write(cf_text)
if args.src_output_dir:
    open(os.path.join(args.src_output_dir, 'cmd_descs.c'), 'w').write(cf_text)

handlers_decls = filter(lambda th: th[1] is not None, [(cd.type, cd.get_handler_cname()) for cd in CmdDesc.c_cds.values()])

hf_text = CMDDESCS_H_TEMPLATE.format(
    handlers_declarations='\n'.join([handler2decl(t, h) for t, h in handlers_decls]),
)
open(os.path.join(args.output_dir, 'cmd_descs.h'), 'w').write(hf_text)
if args.src_output_dir:
    open(os.path.join(args.src_output_dir, 'cmd_descs.h'), 'w').write(hf_text)