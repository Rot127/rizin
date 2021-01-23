OBJ_PTRACE=debug_native.o

STATIC_OBJ+=${OBJ_PTRACE}
TARGET_PTRACE=debug_native.${EXT_SO}

ALL_TARGETS+=${TARGET_PTRACE}

ifeq (${OSTYPE},darwin)
NATIVE_OBJS=native/xnu/xnu_debug.o
endif

ifeq ($(OSTYPE),$(filter $(OSTYPE),gnulinux android))
NATIVE_OBJS=native/linux/linux_debug.o
NATIVE_OBJS+=native/procfs.o
endif
ifeq ($(OSTYPE),$(filter $(OSTYPE),gnulinux))
COREDUMP_OBJS=native/linux/linux_coredump.o
endif

ifneq (,$(findstring bsd,$(OSTYPE))$(findstring dragonfly,$(OSTYPE)))
NATIVE_OBJS=native/bsd/bsd_debug.o
endif

${TARGET_PTRACE}: ${OBJ_PTRACE}
	${CC} $(call libname,debug_native) ${CFLAGS} \
		${LDFLAGS_LINKPATH}.. -L.. -lrz_debug \
		${LDFLAGS_LINKPATH}../../io -L../../io -lrz_io \
		${LDFLAGS_LINKPATH}../../bp -L../../bp -lrz_bp \
		${LDFLAGS_LINKPATH}../../analysis -L../../analysis -lrz_analysis \
		${LDFLAGS_LINKPATH}../../reg -L../../reg -lrz_reg \
		${LDFLAGS_LINKPATH}../../util -L../../util -lrz_util \
		${LDFLAGS_LINKPATH}../../syscall -L../../util -lrz_syscall \
		${LDFLAGS_LINKPATH}../../cons -L../../cons -lrz_cons \
		${OBJ_PTRACE}