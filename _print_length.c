#include "main.h"
/**
 * _str_length_s - string length
 * @string: string pointer
 * Return: str len
 *
 */
int _str_length_s(char *string)
{
	int g = 0;

	while (string[g] != '\0')
	{
		g++;
	}
	return (g);
}
