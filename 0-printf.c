#include "main.h"
#include <stdarg.h>
/**
 * num_to_string - number to string convertor
 * @_num: number
 * @str: string
 */
void num_to_string(int _num, char *str)
{
	int i = 0, is_minus = 0, _digit, temp = _num, _divisor = 1;

	if (_num == 0)
	{str[0] = '0';
		str[1] = '\0';
		return; }
	if (_num < 0)
	{is_minus = 1;
		_num = -(_num); }
	if (is_minus)
	{str[i] = '-';
		i++; }
	while ((temp / 10) != 0)
	{_divisor *= 10;
		temp /= 10; }
	while (_divisor != 0)
	{_digit = _num / _divisor;
		str[i] = '0' + _digit;
		i++;
		_num %= _divisor;
		_divisor /= 10; }
	str[i] = '\0';
}
/**
 * _printf - operates as std printf
 *  @format: the kind of format specifiers passed to this function
 *  Return: The index count
 */
int _printf(const char *format, ...)
{
	va_list args;
	int k = 0, num, i = 0;
	char l, num_char[12], *w;

	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
		{format++;
			if (*format == '\0')
				break;
			else if (*format == '%')
			{_putchar('%');
				k++; }
			else if (*format == 'c')
			{l = (char)va_arg(args, int);
				_putchar(l);
				k++;
				break; }
			else if (*format == 's')
			{w = va_arg(args, char *);
				while (*w != '\0')
				{
					if (*w == '\0')
						break;
					_putchar(*w);
					w++;
					k++; }
			}
			else if (*format == 'd' || *format == 'i')
			{
				num = va_arg(args, int);
				num_to_string(num, num_char);
				while (num_char[i] != '\0')
				{_putchar(num_char[i]);
					i++;
					k++; }
			}

			else
			{_putchar(format[-1]);
				_putchar(*format);
				k += 2; }
		}
		else
		{_putchar(*format);
			k++; }
		format++;
	}
	va_end(args);
	return (k);
}
