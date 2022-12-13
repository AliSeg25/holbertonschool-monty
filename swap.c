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
		fprintf(stderr, "can't swap, stack too short", ligne);
		error = 1;
		return;
	}

	value = (*head)->n;
	(*head)->n = tmp->n;
	tmp->n = value;
}
