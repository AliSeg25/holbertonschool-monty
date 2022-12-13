#include "monty.h"
/**
 * check - check The function.
 * @cmd: commande a saisir.
 * @stack: double pointer to head of stack.
 * @line: ligne number.
 */
void check(char *cmd, stack_t **stack, unsigned int ligne)
{
	int i;
	instruction_t op[] = {
		{"push", push},
		{"pall", pall},
		{"pint", pint},
		{"pop", pop},
		{"add", add},
		{"swap", swap},
		{"nop", nop},
		{NULL, NULL},
	};

	for (i = 0; op[i].opcode != NULL; i++)
	{
		if (strcmp(cmd, op[i].opcode) == 0)
		{
			op[i].f(stack, ligne);
			return;
		}
	}
	fprintf(stderr, "L%u: unknown instruction %s\n", ligne, cmd);
	exit(EXIT_FAILURE);
}
