#include <stdio.h>
/**
 * 
 * 
 * 
*/

int main(void)
{
    int A[] = {2, 4, 5};
    printf("the address = %p\n", A);
    printf("the address = %p\n", &A[0]);
    printf("the value = %d\n", A[0]);
    printf("the value = %d\n", *A);
    return 0;
}