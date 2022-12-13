#include "monty.h"
/**
 * pint - prints the value at top of stack, followed by newline
 * @stack: double pointer at head of stack
 * @line_number: line number of the file we process on
 */
void pint(stack_t **stack, unsigned int line_number)
{
	stack_t *head = *stack;

	if (*stack == 0)
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n", line_number);
		error = 1;
		return;
	}
	printf("%d\n", head->n);
}
