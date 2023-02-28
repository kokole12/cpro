#include <stdlib.h>
#include <stdio.h>

int sum(int x, int y);
/// @brief 
/// @param  
/// @return 
int main(void)
{
    int a = 8;
    int b = 12;
    int z = sum(a, (b+9));
    printf("%d\n", z);
    return 0;
}
/// @brief 
/// @param x 
/// @param y 
/// @return 
int sum(int x , int y)
{
    return x + y;
}