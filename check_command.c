#include "monty.h"

/**
 * check_command - CMonty command validation
 * @command: The command
 * Return: Nothing
 */
void check_command(char *command)
{
	if (strlen(command) > 0)
		printf("%s\n", command);
}
