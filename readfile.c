#include "monty.h"

/**
 * readfile - Open and read the command file
 * @file: The name of the file
 * Return: Nothing or EXIT_FAILURE on failure
 */
void readfile(char *file)
{
int fd, r, i, cmd_pos = 0, num_pos = 0, cmd_found = 0;
char *buffer,  command[100],  number[100];

	buffer = malloc(sizeof(char) * BUFFER_SIZE);
	fd = open(file, O_RDONLY);
	if (fd < 0)
	{	printf("Error: Can't open file %s\n", file);
		exit(EXIT_FAILURE);
	}
	while ((r = read(fd, buffer, BUFFER_SIZE)) > 0)
		for (i = 0; i < r; i++)
		{
			if (buffer[i] != ' ' && buffer[i] != '\n')
				command[cmd_pos] = buffer[i], cmd_pos++, cmd_found = 1;
			if ((buffer[i] == ' ' || buffer[i] == '\n') && cmd_found == 1)
			{
				while (buffer[i] != '\n')
				{
					if (buffer[i] >= 48 && buffer[i] <= 57)
						number[num_pos] = buffer[i], num_pos++;
					else if (buffer[i] == ' ')
					{

					}
					else
					{
						while (buffer[i] != '\n')
							i++;
						break;
					}
					i++;
				}
				command[cmd_pos] = '\0', number[num_pos] = '\0';
				/* check_command(command); */
				printf("%s\n", command), set_number(number);
				memset(command, '\0', 100), memset(command, '\0', 100);
				cmd_pos = 0, num_pos = 0, cmd_found = 0;
			}
		}
	free(buffer);
}
