#include <stdio.h>
#include "main.h"
/**
 * 
 * 
*/

void puts_half(char *str)
{
    int i, j, len;

    i = 0;
    while (str[i] != '\0')
    {
        i++;
    }

    len  = i;
    j = len / 2;

    for (j = len / 2; str[j] != '\0'; j++)
    {
        _putchar(str[j]);
    }
    _putchar('\n');
}
