#include <unistd.h>
/**
 * _putchar - putchar
 * @c: char
 * Return: char
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
