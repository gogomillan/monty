#include "monty.h"

#define BUFFER_SIZE 1024

/**
 *
 *
 *
 *
 */
void readfile(char *file)
{
	int fd;
	int r;
	int i;
	int cmd_pos = 0;
	int num_pos = 0;
	int cmd_found = 0;
	char *buffer;
	char command[100];
	char number[100];

	buffer = malloc(sizeof(char) * BUFFER_SIZE);

	fd = open(file, O_RDONLY);

	if (fd < 0)
	{
		printf("Error: Can't open file %s\n", file);
		exit(EXIT_FAILURE);
	}
	while ((r = read(fd, buffer, BUFFER_SIZE)) > 0)
	{
		for (i = 0; i < r; i++)
		{
			if (buffer[i] != ' ')
			{
				command[cmd_pos] = buffer[i];
				cmd_pos++;
				cmd_found = 1;
			}
			if (buffer[i] == ' ' && cmd_found == 1)
			{
				while (buffer[i] != '\n')
				{
					if (buffer[i] >= 48 && buffer[i] <= 57)
					{
						number[num_pos] = buffer[i];
						num_pos++;
					}
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
				command[cmd_pos] = '\0';
				number[num_pos] = '\0';
				check_command(command);
				set_number(number);
				memset(command, '\0', 100);
				memset(command, '\0', 100);
				cmd_pos = 0;
				num_pos = 0;
				cmd_found = 0;
			}
		}
	}
}
