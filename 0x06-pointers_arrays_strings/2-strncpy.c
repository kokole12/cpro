#include "main.h"
/**
 * 
 * 
*/

char *_strncpy(char *dest, char *src, int n)
{
    int i, j;

    i = 0;
    while (dest[i] != '\0')
    {
        i++;
    }

    for (j = 0; src[j] != '\0' && j < n; j++)
    {
        dest[i] = src[j];
    }

    return (dest);
}
