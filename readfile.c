#include "monty.h"

int valnumber(char *token);

/**
 * readfile - Open and read the command file
 * @file: The name of the file
 * Return: Nothing or EXIT_FAILURE on failure
 */
void readfile(char *file)
{
	char *buffer = NULL, *tmp = NULL, *token, command[100];
	FILE *fp;
	size_t len = 0;
	ssize_t read;
	void (*f)(stack_t **, unsigned int);
	int line_n = 0;
	stack_t *stack = NULL;

	fp = fopen(file, "r");
	if (fp == NULL)
	{	fprintf(stderr, "Error: Can't open file %s\n", file), freestack(stack);
		exit(EXIT_FAILURE);
	}
	while ((read = getline(&buffer, &len, fp)) != -1)
	{	line_n++;
		if (buffer[0] == '#')
			continue;
		if (tmp != NULL)
			free(tmp);
		tmp = strdup(buffer), token = strtok(tmp, " \t\n\r");
		if (token == NULL)
			continue;
		if (token[0] == '#')
			continue;
		strcpy(command, token), f = check_command(command);
		if (f == NULL)
		{	fprintf(stderr, "L%d: unknown instruction %s\n", line_n, command);
			free(tmp), free(buffer), freestack(stack), fclose(fp);
			exit(EXIT_FAILURE);
		}
		token = strtok(NULL, " \n\r\t");
		valnumber(token);
		f(&stack, line_n);
	}
	fclose(fp), free(tmp), free(buffer), freestack(stack);
}

/**
 * valnumber - Integer validation
 * @token: The string wit the number
 * Return: EXIT_FAILURE on failure
 */
int valnumber(char *token)
{
	char number[100];

	if (token == NULL)
	{
		glob_n = -1;
		return (EXIT_FAILURE);
	}

	strcpy(number, token);
	glob_n = atoi(number);
	sprintf(number, "%d", glob_n);

	if (strcmp(number, token) == 0)
		return (EXIT_SUCCESS);

	glob_n = -1;
	return (EXIT_FAILURE);
}
