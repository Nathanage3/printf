#include "main.h"
/**
 * _printf_s - printts the format specifier
 * @string: a string passed from the main prototype function
 * Return: string length
 */
int _printf_s(va_list string)
{
	char *str;
	int n = 0, k;

	str = va_arg(string, char*);
	if (str == NULL || string == NULL)
	{
		str = "(null)";
	}
	k = _str_length_s(str);
	while (n < k)
	{_putchar(str[n]);
		n++; }
	return (k);
}
