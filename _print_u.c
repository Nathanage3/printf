#include "main.h"

/**
 * _print_u - prints unsigned int
 *
 * @unsign: the number to be printed
 */

void _print_u(va_list unsign)
{
        unsigned int nosign = va_arg(unsign, unsigned int);
        int div = 1;
        int dnum;

        if (nosign == 0)
        {
                _putchar('0');
                return;
        }
        else if (nosign > 0)
        {
                while (nosign / div  > 0)
                {
                        div *= 10;
                }
                div /= 10;
                while (div > 0)
                {
                        dnum = nosign / div;
                        _putchar('0' + dnum);
                        nosign %= div;
                        div /= 10;
                }
        }
}
