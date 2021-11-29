#include "main.h"
/**
 **_memcpy - Copies memory area
 *@dest: Destnation
 *@src: Source
 *@n: Bytes
 *Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
