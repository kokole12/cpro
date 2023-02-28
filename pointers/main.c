#include <stdio.h>
/**
 * main - main entry point to the program
 * 
 * 
*/

int main(void)
{
    int a;
    int *ptA;

    a =  45;
    ptA = &a;
    printf("the value is %d\n", a);
    printf("the address is %p\n", ptA);
    printf("the value is %d\n", *ptA);

    return 0;
}