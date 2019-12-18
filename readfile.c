#include "monty.h"

/**
 * readfile - Open and read the command file
 * @file: The name of the file
 * Return: Nothing or EXIT_FAILURE on failure
 */
void readfile(char *file)
{
char *buffer = NULL, *tmp, *token, command[100],  number[100];
FILE *fp;
size_t len = 0;
ssize_t read;
void (*f)(stack_t **, unsigned int);
int line_n = 0;
stack_t *stack = NULL;

	fp = fopen(file, "r");
	if (fp == NULL)
	{	printf("Error: Can't open file %s\n", file);
		exit(EXIT_FAILURE);
	}

	while ((read = getline(&buffer, &len, fp)) != -1)
	{
		line_n++;
		tmp = strdup(buffer);
		token = strtok(tmp, " \t\n\r");
		strcpy(command, token);
		f = check_command(command);
		if (f == NULL)
		{
			fprintf(stderr, "L<%d>: unknown instruction <%s>\n", line_n, command);
			exit(EXIT_FAILURE);
		}
		token = strtok(NULL, " \n\r\t");
		if (token != NULL)
		{
			strcpy(number, token);
			glob_n = atoi(number);
		}
		f(&stack, line_n);

		free(tmp);
	}
	fclose(fp);
	free(buffer);
}
