#include "monty.h"
/**
 * add - Add the two last node.
 * @stack: Double pointer to the head of stack.
 * @ligne_number: The line numbee.
 */
void add(stack_t **stack, unsigned int ligne)
{
	int res = 0;

	if (*stack && (*stack)->next)
	{
		res += (*stack)->n;
		pop(stack, line_number);
		(*stack)->n += res;
	}
	else
	{
		fprintf(stderr, "L%u: can't add, stack too short\n", ligne);
		error = 1;
		return;
	}
}
