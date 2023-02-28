#include <stdio.h>
/**
 * main - main functions
 * 
 * return: always returns a 0
*/

void increment(int a)
{
    a = a + 1;
}

int main(void)
{
    int a;
    increment(a);
    printf("the new value = %d \n", a);
    return 0;
}