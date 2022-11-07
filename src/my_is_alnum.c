#include "my_c_lib.h"

//영어나 숫자가 들어왔을 때, 1을 리턴하고 아니면 0을 리턴하는 함수

int my_is_alnum(char tmp)
{
    return (my_is_digit(tmp) || my_is_alpha(tmp));
}