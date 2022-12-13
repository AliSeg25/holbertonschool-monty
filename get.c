#include "monty.h"
/**
 * get_op - get opcode function
 * @cmd: opcode command
 * @stack:
 * @line_number:
 * Return: function saisi
 */
void get_op(char *cmd, stack_t **stack, unsigned int ligne)
{
	unsigned int i = 0;

	instruction_t ops[] = {
		{"add", add},
		{"pint", pint},
		{"pall", pall},
		{"nop", nop},
		{"pop", pop},
		{"swap", swap},
		{NULL, NULL}
	};

	for (i = 0; ops[i].opcode != NULL; i++)
	{
		if (strcmp(cmd, ops[i].opcode) == 0)
		{
			ops[i].f(stack, ligne);
			return;
		}
	}

	fprintf(stderr, "L%u: unknown instruction %s\n", ligne, cmd);

	exit(EXIT_FAILURE);
}
