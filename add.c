#include "monty.h"
/**
 * add - The opcode add adds the top two elements of the stack.
 * @head: The head steack.
 * @ligne: the ligne
 */
void add(stack_t **head, unsigned int ligne)
{
	stack_t *tmp = (*head)->next;
	int sum = 0;

	if (*head == NULL)
	{
		fprintf(stderr, "can't add, stack too short", ligne);
		return;
	}

	sum = (*head)->n + temp->n;
	tmp->n = sum;

	pop(head, ligne);
}
