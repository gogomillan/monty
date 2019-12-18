#include "monty.h"

/**
 * push - push the value on the stack
 * @stack: The stack
 * @line_number: The current file line number
 * Return: Nothing or EXIT_FAILURE on failure
 */
void push(stack_t **stack, unsigned int line_number)
{
	stack_t *node;
	int k = 10;
	int glob_n = 0;

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
	node->n = glob_n;
	*stack = node;
}
