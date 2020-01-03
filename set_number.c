#include "monty.h"

void set_number(char *number)
{
        int glob_n;

        if (strlen(number) > 0)
        {
                glob_n = atoi(number);
                printf("%d\n", glob_n);
        }
}
