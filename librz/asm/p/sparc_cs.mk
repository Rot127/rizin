OBJ_SPARCCS=asm_sparc_cs.o

include ${CURDIR}capstone.mk

STATIC_OBJ+=${OBJ_SPARCCS}
SHARED_OBJ+=${SHARED_SPARCCS}
TARGET_SPARCCS=asm_sparc_cs.${EXT_SO}

ifeq ($(WITHPIC),1)
ALL_TARGETS+=${TARGET_SPARCCS}

${TARGET_SPARCCS}: ${OBJ_SPARCCS}
	${CC} -o ${TARGET_SPARCCS} ${OBJ_SPARCCS} \
		$(call libname,asm_sparc_cs) ${LDFLAGS} ${CFLAGS} $(CS_LDFLAGS)\
		${SHARED2_SPARCCS}
endif