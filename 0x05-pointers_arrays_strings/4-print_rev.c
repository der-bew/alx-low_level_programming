#include "main.h"
/**
 *print_rev - Prints a string in reverse order
 *@s: input string
 *Return: Nothing
 */

void print_rev(char *s)
{
	int i, length = 0;

	for (i = 0; *(s + i) != '\0'; i++)
		length++;

		for (i = length - 1; i >= 0; i--)
			_putchar(*(s + i));

	_putchar('\n');
}
