#include "monty.h"
#include <stdio.h>
int error = 0;
/**
 *
 *
 *
 */
int main(int argc, char **argv)
{
	FILE *fd;
	size_t n = 1024;
	char str[1024];
	char *tok = NULL;
	unsigned int line_number = 0;
	stack_t *stack = NULL;


	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		return (EXIT_FAILURE);
	}

	fd = fopen(argv[1], "r");/*ouverture du fichier en lecture simple*/

	while (fgets(str, n, fd) != NULL && error != 1)
	{
		line_number++;
		tok = strtok(str, "\n\t ");
		if (tok != NULL)
		{
			get_op(tok, &stack, line_number);
		}
	}


	if (error == 1)
		exit(EXIT_FAILURE);
	return (EXIT_SUCCESS);
}
