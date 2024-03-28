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
	int arg_value = 0; /* to hold return value of atoi */
	char *str = global_var.token2;
	stack_t *new = NULL;
	
	if (global_var.token2 != NULL)
		arg_value = atoi(token2);
	for (; *str != '\0'; str++)
	{
		if (!isdigit(*str) && *str != '-')
		{
		       	fprintf(stderr, "L<%d>: usage: push integer\n", line_number);
		       	exit(EXIT_FAILURE);
		}
	}

	new = malloc(sizeof(stack_t)); /*stack node creation */

	if (new == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}

	new->n = arg_value; /* set value for stack item */
	new->prev = NULL;
	new->next = NULL;

	if (global_var.stack == NULL)
	{
		*stack = new;
		return;
	}

	new->next = (global_var.stack);
	(global_var.stack)->prev = new;
	(global_var.stack) = new;

	return;

}
