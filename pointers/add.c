#include <stdio.h>
/**
 * 
 * 
 * 
*/

int add(int a, int b);
int average(int (*ptadd)(int, int), int a, int b);

int main(void)
{
    int (*ptadd)(int, int) = &add;

    int val =  average(add, 6, 9);

    printf("the average = %d\n", val);
    return 0;
}

int add(int a, int b)
{
    return a + b;
}

int average(int (*ptadd)(int, int), int a, int b)
{
    int n = ptadd(a, b);

    return n/2;
}