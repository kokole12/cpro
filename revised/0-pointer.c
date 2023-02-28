#include <stdio.h>
/**
 * main- main function
*/

int main(void)
{
    int a;
    a = 10;
    int *ptA;
    ptA = &a;
    int **ptP;
    ptP = &ptA;
    printf("the value of a = %d\n", *(*ptP));
    printf("the address of a = %p\n", *ptP);
    return 0;
}
