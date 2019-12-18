#include "monty.h"

int glob_n;

/**
 * push - push the value on the stack
 * @stack: The stack
 * @line_number: The current file line number
 * Return: Nothing or EXIT_FAILURE on failure
 */
void push(stack_t **stack, unsigned int line_number)
{
	stack_t *node;

	node = malloc(sizeof(stack_t));
	if (!node)
	{
		printf("Error: malloc failed %ud", line_number);
		freestack(*stack);
		exit(EXIT_FAILURE);
	}

	node->next = *stack;
	node->prev = NULL;
	node->n = glob_n;
	*stack = node;
}
