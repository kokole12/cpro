#include "main.h"
/**
 * 
 * 
 * 
*/

int _sqrt_recursion(int n)
{
    int sqr_func(int n, int sq);

    int sq = 1;

    return (sqr_func(n, sq));
}
/**
 * 
 * Helper function
*/
int sqr_func(int n, int sq)
{
    if (n == sq * sq)
    {
        return n;
    }
    else if (sq < n)
    {
        return (sqr_func(n , ++sq));
    }
    else
    {
        return (-1);
    }
}
