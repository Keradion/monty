#include "main.h"

void push(stack_t **stack, unsigned int line_number)
{
	int arg_value = 0; /* to hold return value of atoi */

	if (token2 != NULL) /* check if there is an argument given to push */
	       	arg_value = atoi(token2); /* convert that argument to int */

	if (token2 == NULL || arg_value == 0 )
	{
		/* if the argument cant be converted to int or no argument given */

		fprintf(stderr, "L<%d>: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
	}
	printf("%s %s\n",token1, token2);


}
