#include "monty.h"

/**
 * add - add the top two elements of the stack
 * @stack: pointer to head of the stack list
 * @line_number: where the instruction feteched
 *
 * Return: nothing
 */

void add(stack_t **stack, unsigned int line_number)
{
	stack_t *temp = *stack;

	if (temp == NULL || temp->next->next == NULL)
	{
		dprintf(2, "L%d: cant't add, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	(*stack) = (*stack)->next;
	(*stack)->n = (*stack)->n + (temp->n);
	temp->next = NULL;
	(*stack)->prev = NULL;
	free(temp);

}
