#include <stdio.h>
#include <stdlib.h>

int add_natural(int n);

int main(void)
{
    int s1 = add_natural(9);

    printf("%d\n", s1);

    return 0;
}

int add_natural(int n)
{
    if (n == 1)
    {
        return 1;
    }
    else
    {
        return n  + add_natural(n-1);
    }
}