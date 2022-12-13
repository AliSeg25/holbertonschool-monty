#include "monty.h"
/**
 * pop - Removes the top element of stack
 * @stack: To head of stack
 * @line_number: line number
 */
void pop(stack_t **stack, unsigned int ligne)
{
	stack_t *tmp = *stack;

	if (*stack == NULL)
	{
		fprintf(stderr, "L%u: can't pop an empty stack\n", ligne);
		error = 1;
		return;
	}
	*stack = (*stack)->next;
	if (*stack)
		(*stack)->prev = NULL;
	free(tmp);
}
