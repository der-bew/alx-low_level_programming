#include "main.h"
/**
 **rot13 - Encodes a string using rot13
 *@c: Input string
 *Return: c
 */

char *rot13(char *c)
{
	int i, j;
	char alp[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rotalp[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; c[i] != '\0'; i++)
	{
		for (j = 0; alp[j] != '\0'; j++)
		{
			if (c[i] == alp[j])
			{
				c[i] = rotalp[j];
				break;
			}
		}
	}
	return (c);
}
