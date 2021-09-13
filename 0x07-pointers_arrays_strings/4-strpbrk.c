#include "main.h"
/**
 **_strpbrk - Searchs a string for any of a set of bytes
 *@s: Input string
 *@accept: byte
 *Return: s
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
				break;
		}
		if (accept[j])
			return (&s[i]);
	}
	return (0);
}
