#include "main.h"
/**
 **_memset - Fills memory with a constant byte
 *@s: Memory area
 *@b: Constant byte
 *@n: Bytes
 *Return: pointer to s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
