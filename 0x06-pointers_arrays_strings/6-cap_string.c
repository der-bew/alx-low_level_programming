#include "main.h"
/**
 **cap_string - Capitalizes all words of string
 *@c: Input string
 *Return: c
 */

char *cap_string(char *c)
{
	int i, j;
	char ch[] = {' ', ',', ';', '\n', '\t', '.',
		     '!', '?', '"', '(', ')', '{', '}'};

	for (i = 0; c[i] != '\0'; i++)
	{
		if (i == 0 && c[i] >= 97 && c[i] <= 122)
		{
			c[i] -= 32;
		}
		for (j = 0; ch[j] != '\0'; j++)
		{
			if (c[i] == ch[j])
			{
				if (c[i + 1] >= 97 && c[i + 1] <= 122)
				{
					c[i + 1] -= 32;
				}
			}
		}
	}

	return (c);
}
