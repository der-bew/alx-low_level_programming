#include "main.h"
/**
 *rev_string - Reverses a string
 *@s: Input string
 *Return: Nothing
 */

void rev_string(char *s)
{
	if (*s)
	{
		rev_string(s + 1);
		_putchar(*s);
	}
}
