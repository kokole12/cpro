#include <stdio.h>
#include "header.h"

/**
 * 
 * 
 * 
*/
int main(void)
{
    char *str;

    int len;

    str = "Kokole ismail";
    len = _strlen(str);
    printf("The name has a length of %d", len);

    return 0;
}