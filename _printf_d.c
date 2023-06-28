#include "main.h"
/**
 * _printf_d - print decimal and intiger
 * @int_dec: integer decimal number
 * Return: numbers by iteration
 */
int _printf_d(va_list int_dec)
{
	int num_d = va_arg(int_dec, int);
	int z = 0;

	if (num_d < 0)
	{
		_putchar('-');
		num_d = -num_d;
		z++; }
	if (num_d / 10)
		z += print_num(num_d / 10);
	_putchar((num_d % 10) + '0');
	z++;
	return (z);
}
/**
 * print_num - print number
 * @y: quotient
 * Return: iterate till it stops dividing by ten
 */
int print_num(int y)
{
	int l = 0;

	if (y / 10)
		l += print_num(y / 10);
	_putchar((y % 10) + '0');
	l++;
	return (l);
}
