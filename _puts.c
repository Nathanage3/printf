#include "main.h"
/**
 * _puts - print string
 * @str: sring to be executed
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		putchar(str[i]);
		i++;
	}
}
