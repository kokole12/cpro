#include "header.h"

int _strlen(char *c)
{
    int i;

    i = 0;
    while (c[i] != '\0')
    {
        i++;
    }
    return i;
}
