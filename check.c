#include "monty.h"
/**
 * check - check what function to pick according to input
 * @op: opcode file to run on
 * @stack: double pointer to head of stack
 * @line_number: line number of file we process
 */
void check(char *op, stack_t **stack, unsigned int line_number)
{
	int i;
	instruction_t check_op[] = {
		{"push", push},
		{"pall", pall},
		{"pint", pint},
		{"pop", pop},
		{"add", add},
		{"swap", swap},
		{"nop", nop},
		{NULL, NULL},
	};

	for (i = 0; check_op[i].opcode != NULL; i++)
	{
		if (strcmp(op, check_op[i].opcode) == 0)
		{
			check_op[i].f(stack, line_number);
			return;
		}
	}
	fprintf(stderr, "L%u: unknown instruction %s\n", line_number, op);
	exit(EXIT_FAILURE);
}
