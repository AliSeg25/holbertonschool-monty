#include "monty.h"
/**
 * pall - prints all value file.
 * @stack: To head of stack.
 * @ligne: ligne number.
 */
void pall(stack_t **stack, __attribute((unused)) unsigned int ligne)
{
	stack_t *tmp = *stack;

	while (tmp != NULL)
	{
		printf("%d\n", tmp->n);
		tmp = tmp->next;
		if (tmp == *stack)
			return;
	}
}
