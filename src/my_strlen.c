int my_strlen(const char *str)
{
    int i = 0;

    while (str[i] != '\0')
        i++;
    //str의 주속값을 한칸 옮긴다
    return i;
}