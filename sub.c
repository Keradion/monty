#include "monty.h"

/**
 * sub - subtracts the top element of the stack from 2nd top
 * @stack: pointer to the head list of the stack
 * @line_number: where the instruction feteched
 *
 * Return: nothing
 */

void sub(stack_t **stack, unsigned int line_number)
{

	if (*stack == NULL || (*stack)->next == NULL)
	{
		dprintf(2, "L%d: can't sub, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	(*stack)->next->n = (*stack)->next->n - (*stack)->n;
	pop(stack, line_number);
}
