#include "monty.h"
/**
 * pop - Swap the top two elements of the stack.
 * @head: The head steack.
 * @ligne: the ligne
 */
void pop(stack_t **head, unsigned int ligne)
{
	stack_t *tmp = (*head)->next;

	if (*head == NULL)
	{
		fprintf(stderr, "can't swap, stack too short", ligne);
		return;
	}

	value = (*head)->n;
	(*head)->n = tmp->n;
	tmp->n = value;
}
