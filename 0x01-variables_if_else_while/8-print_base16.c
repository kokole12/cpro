#include <stdio.h>
/**
 * main - Entry point
 * 
 * Return - returns 0
*/

int main(void)
{
    int x;
	char c;

	for (x = 48; x < 58; x++)
	{
		putchar(x);
	}

	for (c = 'a'; c < 'g'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
