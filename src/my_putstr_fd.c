// put(출력) -> string을 출력
// 문자열 -> 문자의 연속 -> char의 연속
// -> 연속된 메모리 공간을 나타낼 수 있는 자료형 -> 배열/포인터 -> NULL로 문자열 마지막 표현. 

//(char *)s -> string -> '\0' / (int fd) -> write, putchar fd 썼던 위치
// 문자를 반복해서 출력해주면 됨 -> '\0'

//str = "this is str\n"
#include "my_c_lib.h"

void	my_putstr_fd(char *str, int fd)
{
    // while (*str != '\0')
    // {
    //     my_putchar_fd(*str, fd);
    //     str++;
    // }

    int i = 0;
    while (str[i] != '\0')
    {
        my_putchar_fd(str[i], fd);
        i++;
    }
    
}