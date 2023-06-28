#include "main.h"
/**
 * _print_b - binary
 * @binary: bin
 * Return: binary
 */
int _print_b(va_list binary)
{
	unsigned int bin;
	int y = 0, z, result[32];

	bin = va_arg(binary, unsigned int);
	while (bin == 0)
	{
		_putchar('0');
		return (1);
	}
	while (bin != 0)
	{
		result[y] = bin % 2;
		bin /= 2;
		y++;
	}
	z = y - 1;
	while (z >= 0)
	{
		_putchar(result[z] + '0');
		z--;
	}
	return (y);
}
