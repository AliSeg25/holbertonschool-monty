#include "monty.h"
/**
 * swap - swaps the top two.
 * @stack: To head of stack
 * @ligne : line number.
 */
void swap(stack_t **stack, unsigned int ligne)
{
	int swapper;

	if (*stack && (*stack)->next)
	{
		swapper = (*stack)->n;
		(*stack)->n = (*stack)->next->n;
		(*stack)->next->n = swapper;
	}
	else
	{
		fprintf(stderr, "L%u: can't swap, stack too short\n", ligne);
		error = 1;
		return;
	}
}
