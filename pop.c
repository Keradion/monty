#include "monty.h"

/**
 * pop - removes the top element of the stack
 * @stack: pointer to the head node of the stck list
 * @line_number: where the instruction feteched
 *
 * Return: nothing
 */

void pop(stack_t **stack, unsigned int line_number)
{
	stack_t *temp = *stack;

	if (temp == NULL)
		dprintf(2, "L%d: can't pop an empty stack\n", line_number);

	(*stack) = (*stack)->next;
	temp->next = NULL;
	free(temp);
}
