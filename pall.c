#include "monty.h"

/**
 * pall - prints all the values of the stack
 * @stack: pointer to the head of the stack list
 * @line_number: where the instruction feteched from
 *
 * Return: nothing
 */

void pall(stack_t **stack, __attribute__((unused)) unsigned line_number)
{
	stack_t *temp = *stack;

	if (temp == NULL)
		return;

	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
	}
}
