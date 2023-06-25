#include "main.h"
/**
 * _putchar - it works like std putchar
 * @c: the ascii value of chars
 * Return: the ascii value of c
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * _printf - operates as std printf
 *  @format: the koind of format specifiers passed to this function
 *  Return: The index count
 */

int _printf(const char *format, ...)
{
	va_list args;
	int k = 0;
	char l;
	char *w;

	va_start(args, format);

	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format == '\0')
			{
				break;
			}
			else if (*format == '%')
			{
				_putchar('%');
				k++;
			}
			else
			{
				switch (*format)
				{
					case 'c':
						l = (char)va_arg(args, int);
						_putchar(l);
						k++;
						break;
					case 's':
						w = va_arg(args, char *);
						while (*w != '\0')
						{
							_putchar(*w);
							w++;
							k++;
						}
						break;
					default:
						_putchar(format[-1]);
						_putchar(*format);
						k += 2;
						break;
				}
			}
		}
		else
		{
			_putchar(*format);
			k++;
		}
		format++;
	}
	va_end(args);
	return (k);
}
