#include "monty.h"
/**
 * push - new node in stack
 * @head: pointeur head du stack
 * @n: new value
 */
void push(stack_t **head, __attribute((unused))unsigned int n)
{
	stack_t *new;

	new = malloc(sizeof(stack_t));
	if (new == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}

	new->prev = NULL;

	if (*head == NULL)
	{
		new->next = NULL;
	}

	else
	{
		new->next = *head;
		(*head->prev) = new;
	}

	*head = new;
}
