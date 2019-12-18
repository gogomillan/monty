#include "monty.h"

int glob_n;			/* It is turn to zero at the end of push function */

/**
 * main - The main algorithm
 * @argc: Amount of parameters
 * @argv: The parameters
 * Return: EXIT_SUCCESS on sucess, other when error
 */
int main(int argc, char *argv[])
{
char *glob_opcode[] = {	/* The opcode available */
					"push", "pall", "pint", "pop", "swap", "nop", "sub", "div", "mul",
					"pchar", "pstr", "rotl", "rotr", "stack", "queue", NULL };
char **oc;

	if (argc != 2)
	{
		printf("%s: usage: monty file_name.m\n", argv[0]);
		return (EXIT_FAILURE);
	}
	oc = glob_opcode;

	while (*oc != NULL)
	{
		printf("[%s]", *oc);
		oc++;
	}
	printf("\n");
	printf("[%s]", glob_opcode[PUSH]);
	printf("[%s]", glob_opcode[POP]);
	printf("[%s]", glob_opcode[SUB]);
	printf("[%s]", glob_opcode[PCHAR]);
	printf("[%s]", glob_opcode[ROTR]);
	printf("[%s]", glob_opcode[NIL]);

	return (EXIT_SUCCESS);
}
