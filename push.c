#include "monty.h"

/**
 * push - push an item into the stack
 * @stack: pointer to the head of the stack list
 * @line_number: where the instruction fetched
 *
 * Return: nothing
 */

void push(stack_t **stack, unsigned int line_number)
{
	int arg_value; /* to hold return value of atoi */
	char *str = global_var.token2;
	stack_t *new = *stack;

	if (global_var.token2 == NULL)
	{
		dprintf(2, "L%d: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
	}
	for (; *str != '\0'; str++)
	{
		if ((!isdigit(*str)) && *str != '-')
		{
			dprintf(2, "L%d: usage: push integer\n", line_number);
			exit(EXIT_FAILURE);
		}
	}
	arg_value = atoi(global_var.token2);
	new = malloc(sizeof(stack_t)); /*stack node creation */

	if (new == NULL)
	{
		dprintf(2, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	new->n = arg_value; /* set value for stack item */
	new->prev = NULL;
	new->next = NULL;

	if (global_var.stack == NULL)
	{
		global_var.stack = new;
		return;
	}

	new->next = (global_var.stack);
	(global_var.stack)->prev = new;
	(global_var.stack) = new;

}
