#ifndef MY_C_LIB_H
#define MY_C_LIB_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int my_is_alpha(char tmp);
int my_is_digit(char tmp);
int my_is_alnum(char tmp);
int my_is_ascii(char tmp);
int my_is_print(char tmp);

void my_swap(int* a_tmp , int *b_tmp);
int my_strlen(const char *str);

char *my_strdup(const char *s1);
void	my_putchar_fd(char c, int fd);
void	my_putendl_fd(char *s, int fd);
void	my_putstr_fd(char *str, int fd);

char    *my_strjoin(char const *s1, char const *s2);

#endif
