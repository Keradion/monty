#include "monty.h"

/**
 * pchar - prints the char at the to of the stack
 * @stack: pointer to head node of the list
 * @line_number: instruction line
 *
 * Return: nothing
 */

void pchar(stack_t **stack, unsigned int line_number)
{
	if (*stack == NULL)
	{
		dprintf(2, "L%d: can't pchar, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}
	if ((*stack)->n >= 65 && (*stack)->n <= 90)
	{
		putchar((*stack)->n);
		printf("\n");
	}
	if ((*stack)->n >= 97 && (*stack)->n <= 122)
	{
		putchar((*stack)->n);
		printf("\n");
	}
}
