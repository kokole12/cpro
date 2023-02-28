#include <stdio.h>
int sum(int x, int y);
int average(int (*ptsum)(int, int), int a, int b);

int main(void)
{
    /* instantiating the pointer to sum*/
    int (*ptsum)(int, int) = &sum;
    
    int value = average(ptsum, 8, 5);

    printf("%d\n", value);

    return 0;
}
/* the sum function */
int sum(int x, int y)
{
    return (x+y);
}
/**
 *the average function  having a pointer to function sum
 * it also acts pinter to sum acts as a call back function
*/
int average(int (*ptsum)(int, int), int a, int b)
{
    int n = ptsum(a, b);
    return n/2;
}