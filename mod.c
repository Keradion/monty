#include "monty.h"

/**
 * mod - compute %
 * @stack: pointer to the head of stack list
 * @line_number: where the instruction
 *
 * Return: nothing
 */

void mod(stack_t **stack, unsigned int line_number)
{
	if (*stack == NULL || (*stack)->next == NULL)
	{
		dprintf(2, "L%d: can't mod, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	if ((*stack)->n == 0)
	{
		dprintf(2, "L%d: division by zero\n", line_number);
		exit(EXIT_FAILURE);
	}

	(*stack)->next->n = (*stack)->next->n % (*stack)->n;
	pop(stack, line_number);
}
