#include "monty.h"

/**
 * main - The main algorithm
 * @argc: Amount of parameters
 * @argv: The parameters
 * Return: EXIT_SUCCESS on sucess, other when error
 */
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	readfile(argv[1]);
	return (EXIT_SUCCESS);
}
