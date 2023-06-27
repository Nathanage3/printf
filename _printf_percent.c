#include "main.h"
/**
 * _printf_percent - print percent
 * @args: argument
 * Return: Always 0 for success
 */
int _printf_percent(va_list args)
{
	(void)args;

	_putchar('%');
	return (1);
}
