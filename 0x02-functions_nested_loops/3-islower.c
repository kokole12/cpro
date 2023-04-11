#include "main.h"
#include <stdio.h>
/**
 * is_lower - checks for lower case
 * 
 * Return: always returns int
*/

int _islower(int c)
{
    if (c >= 97 && c <=122)
    {
        return (1);
    }
    else
    {
        return (0);
    }
}
