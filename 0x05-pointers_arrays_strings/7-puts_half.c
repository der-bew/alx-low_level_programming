#include "main.h"
/**
 *puts_half - Prints half of a string
 *@str: Input string
 *Return: Nothing
 */
void puts_half(char *str)
{
	int i, j, length;

	length = 0;
	for (i = 0; *(str + i) != '\0'; i++)
	{
		length++;
	}
	for (j = (length + 2) / 2; j < length; j++)
	{
		_putchar(*(str + j));
	}
	_putchar('\n');
}
