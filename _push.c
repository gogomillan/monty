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

	if (glob_n == -1)
	{
		fprintf(stderr, "L%d: usage: push integer\n", line_number);
		freestack(*stack);
		exit(EXIT_FAILURE);
	}
	node = malloc(sizeof(stack_t));
	if (!node)
	{
		fprintf(stderr, "Error: malloc failed\n");
		freestack(*stack);
		exit(EXIT_FAILURE);
	}

	node->next = *stack;
	node->prev = NULL;
	node->n = glob_n;
	*stack = node;
}
