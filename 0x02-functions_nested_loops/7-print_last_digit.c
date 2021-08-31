#include "main.h"

/**
 *print_last_digit - Prints the last digit of a number
 *
 *@i: Input intiger
 *
 *Return: Always (last digit of i)
 */

int print_last_digit(int i)
{
	int ld;

	if (i < 0)
	{
		ld = -1 * (i % 10);
		_putchar(ld + '0');
		return (ld);
	}
	else
	{
		ld = i % 10;
		_putchar(ld + '0');
		return (ld);
	}
}
