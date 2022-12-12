#include "monty.h"
/**
 * pall - Prints all the elements stack.
 * @h: The head of the dlistint_t list.
 * @n: no attribute
 */
void pall(stack_t **h, __attribute((unused))unsigned int n)
{
	stack_t *temp = *h;

	while (temp)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
	}
}
