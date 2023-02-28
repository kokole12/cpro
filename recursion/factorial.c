#include <stdio.h>
#include <stdlib.h>

int factorial(int n);
/// @brief 
/// @param  
/// @return 
int main(void)
{
    int val = factorial(5);

    printf("The factorial of 5 is %d\n", val);
    
    return (0);
}

/// @brief 
/// @param n 
/// @return 
int factorial(int n)
{
    if (n == 1)
    {
        return 1;
    }
    else
    {
        return n * factorial(n - 1);
    }
}