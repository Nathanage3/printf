#include "main.h"
/**
 * _print_b - changes decimal to binary
 * @binary: passed decimal value
 * Return: 1 for success
 */
int _print_b(va_list binary)
{
	unsigned int nosign;

	nosign = va_arg(binary, unsigned int);
	if (nosign > 1)
	{_print_b(binary); }
	_putchar('0' + nosign % 2);
	return (1);
}
