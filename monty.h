#ifndef _MONTY_H_
#define _MONTY_H_

#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>

#define EXIT_SUCCESS 0
#define EXIT_FAILURE 1

extern int global_var;
int global_var;

/**
 * struct stack_s - DL list of a stack(queue)
 * @n: integer
 * @prev: points to previous element of stack(queue)
 * @next: points to next element of stack(queue)
 *
 * Description: DL list node structure
 */

typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcoode and its func
 * @opcode: the opcode
 * @f: func for opcode
 *
 * Description: opcode and its func
 */

typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

void push_func(stack_t **stack, unsigned int line_number);
void pall_func(stack_t **stack, unsigned int line_number);

#endif
