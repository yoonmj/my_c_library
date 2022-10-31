#include <stdio.h>

int is_digit(char tmp)
{
    if (48 <= tmp && tmp <= 57)
    {
        return(1);
    }

    return(0);
}