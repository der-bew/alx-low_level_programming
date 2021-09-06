#include "main.h"
/**
 *_strlen - Returns the length of a string
 *@s: input string
 *Return: Length of string
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
