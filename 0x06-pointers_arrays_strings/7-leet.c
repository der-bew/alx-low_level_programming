#include "main.h"
/**
 **leet - Encodes a string into 1337
 *@c: Input string
 *Return: c
 */

char *leet(char *c)
{
	int i, j;
	char ch[] = {"aAeEoOtTlL"};
	char dg[] = {"4433007711"};

	for (i = 0; c[i] != '\0'; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (c[i] == ch[j])
			{
				c[i] = dg[j];
			}
		}
	}

	return (c);
}
