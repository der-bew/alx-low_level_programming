#include "main.h"
/**
 **_strcat - Concatenates two strings
 *@dest: Destnation string
 *@src: Source string
 *Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int i, j, length;

	length = 0;
	for (i = 0; dest[i] != '\0'; i++)
	{
		length++;
	}
	for (j = 0; src[j] != '\0'; j++)
	{
		dest[length] = src[j];
		length++;
	}
	dest[i] = '\0';

	return (dest);
}
