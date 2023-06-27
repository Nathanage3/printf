#include "main.h"
/**
 * _printf - do what a printf function do
 * @format: a format specifiers passed to this function
 * Return: an index value
 */
int _printf(const char *format, ...)
{
	const char *f_specifiers[] = {"%s", "%%", "%c", "%u", "%b", "%x", "%X"};
	int (*conversion_f[])(va_list) = {_printf_s, _printf_percent, _printf_c, _print_u, _print_b, _print_x, _print_X};
	va_list args;
	int f_index = 0, _size_f, length = 0, after_perc = 0, is_match = 0;

	va_start(args, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);
	while (format[f_index] != '\0')
	{
		_size_f = (sizeof(f_specifiers) / sizeof(f_specifiers[0])) - 1;
		is_match = 0;
		while (_size_f >= 0)
		{
			after_perc = 0;
			while (f_specifiers[_size_f][after_perc] != '\0' &&
					f_specifiers[_size_f][after_perc] == format[f_index + after_perc])
			{after_perc++; }
			if (f_specifiers[_size_f][after_perc] == '\0')
			{
				length += conversion_f[_size_f](args);
				f_index += after_perc;
				is_match = 1;
				break;
			}
			_size_f--;
		}
		if (!is_match)
		{_putchar(format[f_index]);
			length++;
			f_index++; }
	}
	va_end(args);
	return (length);
}
