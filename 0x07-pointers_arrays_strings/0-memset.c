#include "main.h"
/**
 * _memset - fills memory with a contant byte
 * 
 * 
*/

char *_memset(char *s, char b, unsigned int n)
{
    unsigned int count = 0;

    while (count < n)
    {
        s[count] = b;
        count++;
    }

    return (s);
}
