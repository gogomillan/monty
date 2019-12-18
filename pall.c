#include "monty.h"

/**
 *
 *
 *
 *
 */
void pall(stack_t **stack, unsigned int line_number)
{
	stack_t *node;

	if (!stack)
	{
		printf("%ud", line_number);
	}
	else
	{
		node = *stack;
		while (node)
		{
			printf("%d\n", node->n);
			node = node->next;
		}
	}
}
