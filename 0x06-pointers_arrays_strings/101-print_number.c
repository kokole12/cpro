#include "main.h"
/**
 * 
 * 
 * 
*/

void print_number(int n)
{
    unsigned int n1;

    if (n1 < 0)
    {
        n1 = -n;
        putchar('-');
    }
    else
    {
        n1 = n;
    }

    if (n1 / 10)
        print_number(n1 /10);
    
    _putchar((n % 10) + '0');
}
