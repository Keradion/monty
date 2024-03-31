#include "monty.h"
global_t global_var;
/**
 * main - main fucntion
 * @argc: number of arguments
 * @argv: pointer to array of strings
 *
 * Return: 1 on success
 */

int main(int argc, char *argv[])
{
	FILE *fd = NULL;
	char *buffer = NULL;
	size_t size = 0;
	int get_line = 0;
	unsigned int line_number = 0;
	char *token1 = NULL;

	global_var.stack = NULL;

	if (argc != 2)
	{
		dprintf(2, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}

	fd = fopen(argv[1], "r");
	if (fd == NULL)
	{
		dprintf(2, "Error: Can't open file %s\n", argv[1]);
		free(fd);
		exit(EXIT_FAILURE);

	}

	while ((get_line = getline(&buffer, &size, fd)) != -1)
	{
		line_number++;
		if (get_line < 1)
			continue;
		token1 = strtok(buffer, " \t\n");
		if (token1 == NULL)
			continue;
		global_var.token2 = strtok(NULL, " \t\n");
		validate_opcode(token1, line_number);
	}
	_free();
	free(buffer);
	fclose(fd);
	return (0);

}
