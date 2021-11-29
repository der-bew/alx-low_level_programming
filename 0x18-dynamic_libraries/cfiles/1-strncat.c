#include "main.h"
/**
 **_strncat - Concatenate two string
 *@dest: Destnation string
 *@src: Source string
 *@n: limit integer
 *Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j, length;

	length = 0;
	for (i = 0; dest[i] != '\0'; i++)
	{
		length++;
	}

	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[length] = src[j];
		length++;
	}
	dest[length] = '\0';

	return (dest);
}
