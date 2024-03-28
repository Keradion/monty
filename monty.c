#include "monty.h"
#include <string.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * main - main fucntion
 * @argc: number of arguments
 * @argv: pointer to array of strings
 *
 * Return: 1 on success
 */

int main(int argc, char *argv[])
{
	/* if the user does not give any file */
	/* if the user provide more than one argument */

	FILE *fd = NULL;
	char *buffer = NULL;
	size_t size = 0;
	int get_line = 0;
	unsigned int line_number = 0;
	char *token1 = NULL;

	global_var.stack = NULL;
	if (argc != 2)
	{
		fprintf(stderr, "USAGE: %s file \n", argv[0]);
		exit(EXIT_FAILURE);
	}

	fd = fopen(argv[1], "r");
	if (fd == NULL)
	{
		fprintf(stderr, "Error: can't open file <%s>\n", argv[1]);
		exit(EXIT_FAILURE);

	}

	while ((get_line = getline(&buffer, &size, fd)) != -1)
	{
		line_number++;
		token1 = strtok(buffer, " \t\n");
		global_var.token2 = strtok(NULL, " \t\n");

		validate_opcode(token1, line_number);
	}


	fclose(fd);
	return (1);

}
