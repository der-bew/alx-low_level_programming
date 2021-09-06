#include "main.h"
/**
 *print_rev - Prints a string in reverse order
 *@s: input string
 *Return: Nothing
 */

void print_rev(char *s)
{
	int i, length = 0;

	while (*s != '\0')
	{
		length++;
		s++;

		for (i = length - 1; i >= 0; i--)
		{
			_putchar(*(s + i));
		}
	}
	_putchar('\n');
}
