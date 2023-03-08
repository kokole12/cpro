#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int c;

    while (c != EOF)
    {
        putchar(c);
        c = getchar();
    }
    
}