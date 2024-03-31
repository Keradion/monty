#include "monty.h"

/**
 * comment - dont do anything when # apprears
 * @stack: pointer to the head of the stack list
 * @line_number: instruction line
 *
 * Return: nothing
 */

void comment(stack_t **stack, unsigned int line_number)
{
	(void)(**stack);
	(void)(line_number);
}
