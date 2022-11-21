#include <stdio.h>

int my_is_ascii(char tmp)
{
    if (0 <= tmp && tmp <= 127)
    {
        return(1);
    }

    return(0);
}