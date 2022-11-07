#include <stdio.h>

int my_is_alpha(char tmp)
{
    if ((65 <= tmp && tmp <= 90) || 97 <= tmp && tmp <= 122)
    {
        return(1);
    }

    return(0);
}