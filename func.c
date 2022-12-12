#include "monty.h"
/**
 * get_op - get opcode function
 * @cmd: opcode command
 * Return: function saisi
 */
void (*get_op(char *cmd))(stack_t **stack, unsigned int line_number)
{
	unsigned int i = 0;

	instruction_t ops[] = {
		{"add", add},
		{"push", push},
		{"pint", pint},
		{"pall", pall},
		{"nop", nop},
		{"pop", pop},
		{"swap", swap},
		{NULL, NULL}
	};

	while (ops[i].opcode && strcmp(cmd, ops[i].opcode) != 0)
	{
		i++;
	}

	if (ops[i].opcode == NULL)
		return (NULL);

	return (ops[i].f);

}
