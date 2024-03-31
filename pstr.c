#include "monty.h"

/**
 * pstr - prints the string starting at the top of the stack
 * @stack: head pointer
 * @line_number: instruction line
 *
 * Return: nothing
 */

void pstr(stack_t **stack, unsigned int line_number)
{
	stack_t *temp = *stack;

	(void)(line_number);

	if (*stack == NULL)
		printf("\n");

	while (temp != NULL)
	{
		if ((temp)->n >= 65 && (temp)->n <= 90)
		putchar((temp)->n);
		else if ((temp)->n >= 97 && (temp)->n <= 122)
		putchar((temp)->n);

		(temp) = (temp)->next;
	}

	printf("\n");
}

