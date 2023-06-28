#include "main.h"
/**
 * _printf_r - reverse string
 * @_str: string argument
 * Return: string
 *
 */
int _printf_r(va_list _str)
{
	char *st_r;
	int l, k = 0;

	st_r = va_arg(_str, char*);
	if (st_r == NULL)
		st_r = "(null)";
	while (st_r[k] != '\0')
	{
		k++; }
	l = k - 1;
	while (l >= 0)
	{
		_putchar(st_r[l]);
		l--; }
	return (k);
}
