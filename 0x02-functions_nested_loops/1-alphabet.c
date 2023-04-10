#include "main.h"
#include <stdio.h>
/**
 *
 * print_alphabet -  prints alphabets
 * 
 * Return: returns void
*/

void print_alphabet(void)
{
    char a;

    for (a = 97; a<=122; a++)
    {
        _putchar(a);
    }
    _putchar('\n');
}
