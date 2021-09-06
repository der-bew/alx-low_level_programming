#include "main.h"
/**
 *rev_string - Reverses a string
 *@s: Input string
 *Return: Nothing
 */

void rev_string(char *s)
{
	int i, length;
	char temp;

	length = 0;
	for (i = 0; *(s + i) != '\0'; i++)
	{
		length++;
	}

	for (i = 0; i < length; i++)
	{
		temp = *(s + i);
		*(s + i) = s[length - 1];
		s[length - 1] = temp;
		length--;
	}
}
