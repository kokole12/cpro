#include <stdio.h>
#include "main.h"

int main(void)
{
    char c;

    c = 'A';
    printf("%c: %d\n", c, isupper(c));

    return 0;
}