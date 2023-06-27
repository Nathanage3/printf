#include "main.h"
/**
 * _printf_di - print di
 * @decimal: di
 * Return: count
 */
int _printf_di(va_list decimal)
{
	int num, h = 0;

	int n = va_arg(decimal, int);
	if (n == 0)
	{
		_putchar(0);
		return (1); }
	else if (n < 0)
	{
		_putchar('-');
		h++;
		num = -n; }
	else
	{
		num = n;
	}
	h += print_num(num);
	return (h);
}
/**
 * print_num - printing numbers
 * @num: num
 * Return: 1 for success
 */
int print_num(int num)
{

	if (num / 10 != 0)
		return ('0' + (num % 10));
	_putchar('0' + (num % 10));
	return (1);
}
