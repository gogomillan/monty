#include "monty.h"

struct global glob;

/**
 * push - push the value on the stack
 * @stack: The stack
 * @line_number: The current file line number
 * Return: Nothing or EXIT_FAILURE on failure
 */
void push(stack_t **stack, unsigned int line_number)
{
	stack_t *node;

	(void) line_number;
	node = malloc(sizeof(stack_t));
	if (!node)
	{
		fprintf(stderr, "Error: malloc failed\n");
		freestack(*stack);
		exit(EXIT_FAILURE);
	}

	if (glob.stack_mode == PUSH_STACK)
	{
		node->next = *stack;
		node->prev = NULL;
		node->n = glob.stack_n;
		*stack = node;
	}
}
