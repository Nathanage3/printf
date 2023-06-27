#include "main.h"

/**
 * _print_b - changes decimal to binary
 * @pdec: passed decimal value
 */
void _print_b(va_list binary)
{
        unsigned int nosign = va_arg(binary, unsigned int);

        if (nosign > 1)
        {
                _print_b(binary);
        }
                _putchar('0' + nosign % 2);
}
