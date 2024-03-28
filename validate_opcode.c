#include "main.h"

/**
 * validate_opcode  - validate an opcode given as an instruction
 * @opcode: instruction / opcode
 *
 * Return: nothing
 */

void validate_opcode(stack_t **stack, char *opcode, unsigned int line_number)
{
	unsigned int line_num = line_number;
	int i = 0;

	instruction_t instructions [] = {
		{"push", push}
	};

	for (i = 0; i < 2; i++)
	{
		if ((strcmp(opcode, instructions[i].opcode)) == 0)
		{
			instructions[i].f(stack, line_num);
			return;
		}
	}
	
	fprintf(stderr,"L<%d>: unknown instruction <%s>\n", line_number, opcode);
	exit(EXIT_FAILURE);
}
