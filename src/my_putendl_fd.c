//s 출력 -> endline = newline = '\n'
#include "my_c_lib.h"

void	my_putendl_fd(char *s, int fd)
{
    //s -> 주소값
    my_putchar_fd(*s, fd);
    write(fd, "\n", 1);
    //=my_putchar_fd("\n", fd); s는 ""안되서 불가
}