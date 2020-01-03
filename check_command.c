#include "monty.h"

void check_command(char *command)
{
        if (strlen(command) > 0)
                printf("%s\n", command);
}
