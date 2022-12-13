#ifndef MONTY_H_INCLUDED
#define MONTY_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include <unistd.h>
#include <ctype.h>
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

extern int error;
void pall(stack_t **h, __attribute((unused))unsigned int n);
void push(stack_t **head, int ligne);
void pint(stack_t **head, unsigned int ligne);
void pop(stack_t **head, unsigned int ligne);
void swap(stack_t **head, unsigned int ligne);
void add(stack_t **head, unsigned int ligne);
void nop(stack_t **head, unsigned int ligne);
void get_op(char *cmd, stack_t **stack, unsigned int ligne);
int check_digit(char *arg);
stack_t *new_node(stack_t **head, int n);


#endif /* MONTY_H_INCLUDED*/
