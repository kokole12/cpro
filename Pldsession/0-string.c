#include <stdio.h>
#include <string.h>
/**
 * 
 * 
 * 
*/

int main(void)
{
    char C[5];
    C[0] = 'J';
    C[1] = 'O';
    C[2] = 'H';
    C[3] = 'N';
    C[4] = '\0';
    int len = strlen(C);
    // int lenn = strnlen('N', C);
    printf("%d\n", len);
    // printf("%d\n", lenn);
    printf("%s\n",C);
    return 0;
}