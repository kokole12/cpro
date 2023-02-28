#include <stdio.h>
/**
 * 
 * 
 * 
*/

int main(void)
{
    int A[] = {3, 5, 2, 7, 9};
    for (int i = 0; i < 5; i++)
    {
        printf("the address = %p\n", (A + i));
        printf("the address = %p\n", &A[i]);
        printf("the value = %d\n", *(A + i));
        printf("the address = %d\n", A[i]);
    }
    return 0;
}