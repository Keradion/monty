#include "monty.h"

/**
 * _div - divides the 2nd top element by thr top element of the stack
 * @stack: pointer to the head list of the stack
 * @line_number: where the instruction from
 *
 * Return: nothing
 */

void _div(stack_t **stack, unsigned int line_number)
{
	if (*stack == NULL || (*stack)->next == NULL)
	{
		dprintf(2, "L%d: can't div, stack to short\n", line_number);
		exit(EXIT_FAILURE);
	}

	if ((*stack)->n == 0)
	{
		dprintf(2, "L%d: division by zero\n", line_number);
		exit(EXIT_FAILURE);
	}
	(*stack)->next->n = ((*stack)->next->n) / ((*stack)->n);
	pop(stack, line_number);
}
