#include <stdlib.h>
#include <stdio.h>

/// @brief 
/// @param n 
/// @return 
int add_to_n(int n);
int main(void)
{
    int x = add_to_n(3);
    printf("%d\n", x);
    return 0;
}

/// @brief 
/// @param n 
/// @return 
int add_to_n(int n)
{
    if (n >= 10)
    {
        return 11;
    }
    else
    {
        ++n;
        printf("%d\n", n);
        return (add_to_n(n));
    }
}