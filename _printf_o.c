#include "main.h"
/**
 * _printf_o - octal
 * @arg: arg list
 * Return: number digits
 */
int _printf_o(va_list arg)
{
	unsigned int numb;
	int c = 0, k, result[12];

	numb = va_arg(arg, unsigned int);
	if (numb == 0)
	{
		_putchar('0');
		return (1);
	}
	while (numb != 0)
	{
		result[c] = numb % 8;
		numb /= 8;
		c++;
	}
	for (k = c - 1; k >= 0; k--)
	{
		_putchar(result[k] + '0');
	}
	return (c);
}
