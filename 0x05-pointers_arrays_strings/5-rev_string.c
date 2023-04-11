#include "main.h"
#include <stdio.h>
/**
 * 
 * 
*/

void rev_string(char *s)
{
    int i, j, len, tmp;

    i = 0;
    while (s[i] != '\0')
    {
        i++;
    }

    len = i - 1;

    for (j = 0; j < len / 2; j++)
	{
		tmp = s[j];
		s[j] = s[len];
		s[len--] = tmp;
	}
}
