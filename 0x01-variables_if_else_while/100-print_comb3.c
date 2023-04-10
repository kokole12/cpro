#include <stdio.h>
/**
 * main - Entry point
 * 
 * Return - returns 0
*/

int main(void)
{
    int n, v;

    for (n = 48; n < 58; n++)
    {
        for (v = 49; v < 58; v++)
        {
            if (n < v)
            {
                putchar(n);
                putchar(v);

                if (n < 56 || v < 57)
                {
                    putchar(44);
                    putchar(32);
                }

            }
        }
    }
    putchar('\n');
    return (0);
}
