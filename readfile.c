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

	fp = fopen(file, "r");
	if (fp == NULL)
	{	printf("Error: Can't open file %s\n", file);
		exit(EXIT_FAILURE);
	}

	while ((read = getline(&buffer, &len, fp)) != -1)
	{
		tmp = strdup(buffer);
		token = strtok(tmp, " \t\n\r");
		if (strncmp(token, "push", 4) == 0)
		{
			strcpy(command, token);
			token = strtok(NULL, " \n\r\t");
			strcpy(number, token);
			printf("%s | %s\n", command, number);
		}
		else
		{
			strcpy(command, token);
			printf("%s\n", command);
		}
		free(tmp);
	}
	fclose(fp);
	free(buffer);
}
