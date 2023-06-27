#include "main.h"
#include <stdarg.h>
/**
 * _printf - operates as std printf
 *  @format: the kind of format specifiers passed to this function
 *  Return: The index count
 */
int _printf(const char *format, ...)
{
	va_list args;
	int k = 0;
	char l, *w;

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
			else
			{_putchar(format[-1]);
				_putchar(*format);
				k += 2; }
		}
		else
		{_putchar(*format);
			k++; }
		format++; }
	va_end(args);
	return (k);
}
