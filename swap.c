#include "monty.h"
/**
 * swap - Swap the top two elements of the stack.
 * @head: The head steack.
 * @ligne: the ligne
 */
void swap(stack_t **head, unsigned int ligne)
{
	stack_t *tmp = (*head)->next;
	int value;

	if (*head == NULL)
	{
		fprintf(stderr, "L%u: can't swap, stack too short\n", line);
		error = 1;
		return;
	}

	value = (*head)->n;
	(*head)->n = tmp->n;
	tmp->n = value;
}
