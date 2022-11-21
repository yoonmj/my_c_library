#include <stdio.h>

int my_is_print(char tmp)
{
    if (33 <= tmp && tmp <= 126)
    {
        return (1);
    }

    return (0);
}