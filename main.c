#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

char *token2 = NULL;
char *token1 = NULL;
/**
 * main - main fucntion
 * @argc: number of arguments
 * @argv: pointer to array of strings
 *
 * Return: 1 on success
 */

int main (int argc, char *argv[])
{
	/* if the user does not give any file */
	/* if the user provide more than one argument */

	FILE *fd = NULL;
	char *buffer = NULL;
	size_t size = 0;
	int get_line = 0;
	unsigned int line_number = 0;
	stack_t **stack = NULL;


	if (argc < 2 || argc > 2)
	{
	       fprintf(stderr, "USAGE: %s file \n", argv[0]);	
	       exit(EXIT_FAILURE);
	}

	fd = fopen(argv[1], "r");
	if (fd == NULL)
	{
		fprintf(stderr, "USAGE: %s file\n", argv[0]);
		exit(EXIT_FAILURE);

	}

	while ((get_line = getline(&buffer, &size, fd)) != -1)
	{
		line_number++;
		
		token1 = strtok(buffer, " \t\n");
		token2 = strtok(NULL," \t\n");

		validate_opcode(stack,token1, line_number);
	
	}


	fclose(fd);
	return (1);

}
