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
<<<<<<< HEAD
=======
int _print_b(va_list binary);
int _print_u(va_list unsign);
int _print_x(va_list *shexa);
int _print_X(va_list lhexa);
>>>>>>> 3f57fdc6ec4ee2179d0db2ee4aae90bddfe51020

#endif
