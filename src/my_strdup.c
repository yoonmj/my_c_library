#include <stdlib.h>
#include "my_c_lib.h"
//strdup => s1을 새롭게 메모리 할당해서 복사하여 리턴하는 함수
//s1 -> string -> "가나다라\0"

//s1의 길이를 알아서 -> 메모리를 할당하고 그 메모리에 s1에 있는 값들을 넣어주기
char *my_strdup(const char *s1)
{
    int len;
    int i = 0;
    char *new_str;

    len = my_strlen(s1);

    if (!(new_str = (char *) malloc(sizeof(char) * (len+1))))
        return NULL; //0대신 char에서는 NULL

    //2.s1값 깊은 복사
    //인덱스를 활용하는 방법
    while (s1[i] != '\0')
    {
        new_str[i] = s1[i];
        i++;
    }

    new_str[i] = '\0';

    //포인터 주소값을 이용하는 방법
    // while (*s1 != '\0')
    // {
    //     *(new_str) = *s1;

    //     s1++;
    //     new_str++;
    // }
    return new_str;
}