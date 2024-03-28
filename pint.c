#include "monty.h"

/**
 * pint - print the value at the top of the stack
 * @stack: pointer to the head node of the stack list
 * @line_number: where the instruction fetched
 *
 * Return: nothing
 */

void pint(stack_t **stack, unsigned int line_number)
{
	stack_t *temp = *stack;

	if (temp == NULL)
	{
		fprintf(stderr, "L<%d>: cant't pint, stack empty", line_number);
		exit(EXIT_FAILURE);
	}

	printf("%d\n", temp->n);
}
