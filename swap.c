#include "monty.h"

/**
 * swap - swap the top 2 elements of the stack
 * @stack: pointer to the head node of the stack list
 * @line_number: where the instruction feteched
 *
 * Return: nothing
 */

void swap(stack_t **stack, unsigned int line_number)
{
	stack_t *temp = *stack;
	int tempo = 0;

	if (temp == NULL)
		dprintf(2, "L%d: can't swap stack too short\n", line_number);
	temp = (*stack)->next;
	tempo = temp->n;
	temp->n = (*stack)->n;
	(*stack)->n = tempo;
}
