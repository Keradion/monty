#include "monty.h"

/**
 * _free - frees allocated space for stack list
 *
 * Return: nothing
 */

void _free(void)
{
	stack_t *temp = global_var.stack;
	stack_t *temp1 = NULL;

	while (temp != NULL)
	{
		temp1 = temp;
		temp->prev = NULL;
		temp = temp->next;
		temp1->next = NULL;
		free(temp1);

	}

}
