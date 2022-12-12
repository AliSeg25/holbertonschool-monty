#include "monty.h"
/**
 * pint - Prints the top of the stack.
 * @head: The head of the dlistint_t list.
 * @ligne: the ligne
 */
void pint(stack_t **head, unsigned int ligne)
{
	if (*head == NULL)
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n", ligne);
		return;
	}

	printf("%d\n", (*head)->n);
}
