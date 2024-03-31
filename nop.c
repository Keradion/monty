#include "monty.h"

/**
 * nop - does not do anything
 * @stack: pointer to the head of the stack list
 * @line_number: where the instruction feteched
 *
 * Return: none
 */

void nop(stack_t **stack, __attribute__((unused))unsigned int line_number)
{
	(void)**stack;
}
