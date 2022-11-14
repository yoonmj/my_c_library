int my_strlen(char *str)
{
    int len;

    while (*str !== '\0')
    {
        len++;
        str++;  //str의 주속값을 한칸 옮긴다
    }

    return len;
}