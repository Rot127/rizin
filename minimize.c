//
// Build with:
// gcc -g -lpthread -lpcre2-16 -fsanitize=address,undefined -o minimize minimize.c

#include <pthread.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include <semaphore.h>

#define PCRE2_CODE_UNIT_WIDTH 0
#include <pcre2.h>

#define CONCURRENCY 8
#define TASKS       100000

#define HUGE_BUF_SIZE (1024 * 1024 * 1024)
#define CHUNK_SIZE    1024 * 1024
#define STRUCT_SIZE   sizeof(struct input)

struct input {
	pcre2_code_16 *re;
	const uint8_t *random_data;
	uint64_t offset;
};

static sem_t workers; /* semaphore counting free worker slots */

static void *worker(void *cloned_input) {
	struct input *in = cloned_input;

	uint8_t *moved_buf = calloc(CHUNK_SIZE, 1);
	memcpy(moved_buf, in->random_data + 3, CHUNK_SIZE - 3);

	pcre2_code_16 *re = pcre2_code_copy_with_tables_16(in->re);
	pcre2_jit_compile_16(re, PCRE2_JIT_COMPLETE);

	pcre2_match_16(
    re,
    (PCRE2_SPTR16)moved_buf,
    CHUNK_SIZE / 16,
    in->offset,
    PCRE2_EXTENDED,
    NULL,
    NULL);
	pcre2_code_free_16(re);
	free(moved_buf);
	free(cloned_input);

	sem_post(&workers); /* return one slot */
	return NULL;
}

int main(void) {
	uint8_t *random_data = malloc(HUGE_BUF_SIZE);
	if (!random_data) {
		perror("malloc");
		exit(EXIT_FAILURE);
	}
	
	pcre2_code_16 *re = pcre2_compile_16(
		(PCRE2_SPTR16)"something_ininvalid_anywayssomething_ininvalid_anywayssomething_ininvalid_anywayssomething_ininvalid_anywayssomething_ininvalid_anywayssomething_ininvalid_anywayssomething_ininvalid_anywayssomething_ininvalid_anyways\0\0\0\0\0\0\0",
		PCRE2_ZERO_TERMINATED,
		PCRE2_EXTENDED | PCRE2_UTF | PCRE2_MATCH_INVALID_UTF,
		NULL,
		NULL,
		NULL);
	pcre2_jit_compile_16(re, PCRE2_JIT_COMPLETE);
	struct input *in = malloc(STRUCT_SIZE);
	in->random_data = random_data;
	in->re = re;

	sem_init(&workers, 0, CONCURRENCY); /* start with 8 free slots */

	for (long i = 0; i < TASKS; ++i) {
		if (i % 5 == 0) {
			printf("\r%ld/%d", i, TASKS);
		}
		sem_wait(&workers); /* wait until a slot is free */

		struct input *clone = malloc(STRUCT_SIZE);
		memcpy(clone, in, STRUCT_SIZE);
		clone->offset = (CHUNK_SIZE * i) % HUGE_BUF_SIZE;
		pthread_t tid;
		if (pthread_create(&tid, NULL, worker, clone) != 0) {
			perror("pthread_create");
			exit(EXIT_FAILURE);
		}
		pthread_detach(tid); /* we never join it */
	}
	printf("\n");

	pcre2_code_free_16(re);

	/* wait until every task has finished */
	for (int i = 0; i < CONCURRENCY; ++i)
		sem_wait(&workers);
	sem_destroy(&workers);
	return 0;
}
