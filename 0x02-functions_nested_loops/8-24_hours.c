#include <stdio.h>
#include "main.h"
/**
 * jack_baurer - prints time format
 * 
*/

void jack_bauer(void)
{
    int x , y;

    for (x = 0; x < 24; x++)
    {
        for (y = 0; y< 60; y++)
        {
            _putchar('0' + (x / 10));
            _putchar('0' + (x % 10));
            _putchar(':');
            _putchar((y / 10) + '0');
			_putchar((y % 10) + '0');
			_putchar('\n');
        }
    }
}
