#include <stdio.h>

void _puts(char *str)
{
    int i;

    for(i = 0; str[i] != '\0'; i++)
    {
        putchar(*(str + 1));
    }
    putchar('\n');
}