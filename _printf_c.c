#include "main.h"
/**
 * _printf_c - print char
 * @ch: char list
 * Return: 1 char
 */
int _printf_c(va_list ch)
{
	char a;

	a = (char)va_arg(ch, int);
	_putchar(a);
	return (1);
}
