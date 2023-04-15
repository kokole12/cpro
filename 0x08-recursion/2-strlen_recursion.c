#include "main.h"
/**
 * 
 * 
 * 
*/

int _strlen_recursion(char *s)
{
    int count;

    // while (s[i] != '\0')
    // {
    //     i++;
    // }

    // return (i);

    if (*s == '\0')
    {
        return (0);
    }
    else
    {
        count = 1 + _strlen_recursion(s + 1);
    }

    return (count);
}
