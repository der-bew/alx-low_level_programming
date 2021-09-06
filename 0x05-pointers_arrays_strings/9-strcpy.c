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
	int i, j, length;

	length = 0;
	for (i = 0; *(src + i) != '\0'; i++)
	{
		length++;
	}
	for (j = 0; j < length; j++)
	{
		*(dest + i) = *(src + i);
	}
	*(dest + i) = '\0';

	return (dest);
}
