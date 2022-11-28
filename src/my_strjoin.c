#include "my_c_lib.h"

char *my_strjoin(char const *s1, char const *s2)
{
    int len;
    int i = 0;
    int j = 0;
    char *new_str;

    int len1 = my_strlen(s1);
    int len2 = my_strlen(s2);
    len = len1 + len2;

    if(s1 == NULL || s2 == NULL)
       return (0);

    if (!(new_str = (char *)malloc(sizeof(char) * (len + 1))))
        return 0;

    while (s1[i] != '\0')
    {
        new_str[i] = s1[i];
        i++;
    }

    while (s2[j] != '\0')
    {
        new_str[i] = s2[j];
        i++;
        j++;
    }

    new_str[i] = '\0';

    return new_str;
}