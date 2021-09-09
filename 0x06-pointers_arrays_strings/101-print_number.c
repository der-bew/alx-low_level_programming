#include "main.h"
/**
 *print_number - Prints an integer
 *@n: Input integer
 *Return: Nothing
 */

void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	else
	{
		n = n;
	}

	if (n > 9)
	{
		print_number(n / 10);
	}
	_putchar((n % 10) + '0');
}
