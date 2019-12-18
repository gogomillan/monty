#include "monty.h"

/**
 * rotr - remove the top elemnt of the stack
 * @stack: The stack
 * @line_number: The current file line number
 * Return: Nothing or EXIT_FAILURE on failure
 */
void rotr(stack_t **stack, unsigned int line_number)
{
	stack_t *tail, *prev;

	if (*stack == NULL)
	{
		fprintf(stderr, "L%d: can't rotl, stack too short\n", line_number);
		freestack(*stack);
		exit(EXIT_FAILURE);
	}
	if ((*stack)->next == NULL)
	{
		fprintf(stderr, "L%d: can't rotl, stack too short\n", line_number);
		freestack(*stack);
		exit(EXIT_FAILURE);
	}
	tail = *stack;
	prev = *stack;
	while (tail->next)
	{
		prev = tail;
		tail = tail->next;
	}
	prev->next = NULL;
	tail->prev = NULL;
	tail->next = *stack;
	(*stack)->prev = tail;
	*stack = tail;
}
