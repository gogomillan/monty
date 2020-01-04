#include "monty.h"

/**
 * pint - prints the value at the top of the stack, followed by a new line
 * @stack: The stack
 * @line_number: The current file line number
 * Return: Nothing
 */
void pint(stack_t **stack, unsigned int line_number)
{
	if (*stack)
	{
		printf("%d\n", (*stack)->n);
	}
}
