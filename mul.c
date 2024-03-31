#include "monty.h"

/**
 * mul - multiplies the 2nd top element by the top elements
 * @stack: pointer to the head node of the stack list
 * @line_number: where the instruction from
 *
 * Return: nothing
 */

void mul(stack_t **stack, unsigned int line_number)
{
	if (*stack == NULL || (*stack)->next == NULL)
	{
		dprintf(2, "L%d: can't mul, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	(*stack)->next->n = (*stack)->next->n * (*stack)->n;
	pop(stack, line_number);
}
