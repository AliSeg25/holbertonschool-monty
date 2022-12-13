#include "monty.h"
/**
 * push - new node in stack
 * @head: pointeur head du stack
 * @n: new ligne
 */
void push(stack_t **head, int ligne)
{
	int data;
	char *arg;

	arg = strtok(NULL, "\n\t ");
	if (arg == NULL || check_digit(arg))
	{
		fprintf(stderr, "L%u: usage: push integer\n", line);
		exit(EXIT_FAILURE);
	}
	data = atoi(arg);
	if (new_node(head, data) == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
}
/**
 * new_node - add a newnode at beginning.
 * @head: pointeur head du stack
 * @data: new value to fill in new node
 * Return: pointer to new node
 */
stack_t *new_node(stack_t **head, int n)
{
	stack_t *new;

	new = malloc(sizeof(stack_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = *head;
	new->prev = NULL;

	if (*head)
		(*head)->prev = new;

	*head = new;
	return (new);
}
/**
 * check_digit - check if the string contains only digits
 * @arg: pointer on argument to check
 * Return: 0 if only digits are found, 1 otherwise
 */

int check_digit(char *arg)
{
	int i;

	for (i = 0; arg[i]; i++)
	{
		if (arg[i] == '-' && i == 0)
			continue;
		if (isdigit(arg[i]) == 0)
			return (1);
	}
	return (0);
}
