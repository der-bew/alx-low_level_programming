#include "main.h"
/**
 * *_strcpy - copies the string pointed to by src, including the terminating
 *null byte (\0), to the buffer pointed to by dest
 *@dest: pointer
 *@src: Input
 *Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int i, length;

	length = 0;

	while (src[length] != '\0')
	{
		length++;
	}

	for (i = 0; i < length; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
