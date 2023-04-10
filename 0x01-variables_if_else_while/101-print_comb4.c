#include <stdio.h>
/**
 * main - Entry point
 * 
 * Return: returns 0
*/

int main(void)
{
    int n, v, x;

    for(n = 48; n < 58; n++)
    {
        for (v = 49; v < 58; v++)
        {
            for (x = 50; x < 58; x++)
            {
                if (n < v && v < x)
                {
                    putchar(n);
                    putchar(v);
                    putchar(x);

                    if (n != 55 || v != 56 || x != 57){
                        putchar(44);
                        putchar(32);
                    }
                }
            }
        }
    }
    putchar('\n');
    return (0);
}
