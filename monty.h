#ifndef MONTY_H
#define MONTY_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include <unistd.h>
#include <ctype.h>

extern int error;

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;
void free_all(stack_t *stack, FILE *fd);
void pop(stack_t **stack, unsigned int ligne);
void pall(stack_t **stack, __attribute((unused)) unsigned int ligne);
void nop(stack_t **stack, unsigned int ligne);
void add(stack_t **stack, unsigned int ligne);
void check(char *cmd, stack_t **stack, unsigned int ligne);
void pint(stack_t **stack, unsigned int ligne);
void push(stack_t **stack, unsigned int ligne);
stack_t *add_node(stack_t **stack, int n);
void swap(stack_t **stack, unsigned int ligne);
/* Prototypes */

ssize_t getline(char **lineptr, size_t *n, FILE *stream);




#endif /* MONTY_H */
