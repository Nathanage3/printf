#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <limits.h>
#include <stdio.h>
#include <unistd.h>
#include <stddef.h>

int _printf_s(va_list string);
int _str_length_s(char *string);
int _putchar(char c);
int _printf_c(va_list ch);
int _printf_percent(va_list args);
int _printf(const char *format, ...);
int _print_b(va_list binary);
int _printf_d(va_list int_dec);
int print_num(int y);

#endif
