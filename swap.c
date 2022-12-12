#include "monty.h"
/**
 * pint - Prints the top of the stack.
 * @head: The head of the dlistint_t list.
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
