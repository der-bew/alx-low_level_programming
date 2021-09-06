#include "main.h"
/**
 *puts_half - Prints half of a string
 *@str: Input string
 *Return: Nothing
 */
void puts_half(char *str)
{
	int i, j, k, length;

	length = 0;
	for (i = 0; *(str + i) != '\0'; i++)
	{
		length++;
	}

	if (length % 2 == 0)
	{
		for (j = length / 2; *(str + j) != '\0'; j++)
		{
			_putchar(*(str + j));
		}
	}
	else
	{
		for (k = (length - 1) / 2; k < length - 1; k++)
		{
			_putchar(str[k + 1]);
		}
	}
	_putchar('\n');
}
