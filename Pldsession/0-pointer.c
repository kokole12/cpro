#include <stdio.h>
/**
 * main - main functions
 * 
 * return: always returns a 0
*/

int increment(int * a)
{
    printf("the first address = %p\n", a);
    return (*a)+1;
}

int main(void)
{
    int a, res;
    a = 10;
    res = increment(&a);
    printf("the address of a = %p\n", &a);
    printf("the new value = %d \n", res);
    return 0;
}
