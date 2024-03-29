#include "monty.h"

/**
 * validate_opcode - validate an opcode given as an instruction & call func
 * @opcode: instruction / opcode
 * @line_number: where the instruction feteched
 *
 * Return: nothing
 */

void validate_opcode(char *opcode, unsigned int line_number)
{
	unsigned int line_num = line_number;
	int i = 0;

	instruction_t instructions[] = {
		{"push", push},
		{"pall", pall},
		{"pint", pint},
		{"pop", pop}
	};

	for (i = 0; i < 4; i++)
	{

		if ((strcmp(opcode, instructions[i].opcode)) == 0)
		{
			instructions[i].f(&global_var.stack, line_num);
			return;
		}
	}
	dprintf(2, "L%d: unknown instruction %s\n", line_number, opcode);
	exit(EXIT_FAILURE);

}
