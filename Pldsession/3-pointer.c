#include <stdio.h>
/**
 * 
 * 
 * 
*/

int sumOfElements(int *A, int size)
{
    int i, sum=0;
    for (i = 0; i < size; i++)
    {
        sum +=A[i];
    }
    return sum;
}

int main(void)
{
    int as;
    int A[] = {2, 5, 6, 8, 10};
     int size = sizeof(A)/sizeof(A[0]);
    as = sumOfElements(A, size);
    printf("Sum = %d\n", as);
    return 0;
}