#include "monty.h"

/**
 *
 *
 *
 *
 */
void push(stack_t **stack, unsigned int line_number)
{
	stack_t *node;
	int k = 10;

	node = malloc(sizeof(stack_t));

	if (!node)
	{
		printf("Error: malloc failed %ud", line_number);
		exit(EXIT_FAILURE);
	}
	if (!*stack)
	{
		node->next = NULL;
	}
	else
	{
		node->next = *stack;
	}
	node->prev = NULL;
	node->n = k;
	*stack = node;
}
