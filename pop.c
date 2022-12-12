#include "monty.h"
/**
 * pop - free head of the stack.
 * @head: The head of the stack.
 * @ligne: the ligne
 */
void pop(stack_t **head, unsigned int ligne)
{
	stack_t *tmp = *head;

	if (*head == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack", ligne);
		return;
	}

	*head = (*head)->next;
	free(tmp);
}
