#include "monty.h"

/**
 * mod - sub the two top elements of the stack
 * @stack: The stack
 * @line_number: The current file line number
 * Return: Nothing or EXIT_FAILURE on failure
 */
void mod(stack_t **stack, unsigned int line_number)
{
	int module = 1;

	if (*stack == NULL)
	{
		fprintf(stderr, "L<%d>: can't mod, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	if ((*stack)->next == NULL)
	{
		fprintf(stderr, "L<%d>: can't mod, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	if ((*stack)->n == 0)
	{
		fprintf(stderr, "L<%d>: division by zero\n", line_number);
                exit(EXIT_FAILURE);
	}
	pop(stack, line_number);
	module = glob_n;
	pop(stack, line_number);
	module = glob_n % module;
	glob_n = module;
	push(stack, line_number);
}