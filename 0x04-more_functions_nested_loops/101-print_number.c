#include "main.h"

/**
 *print_number - Print an integer
 *@n: Input integer
 *Return: Nothing return
 */

void print_number(int n)
{
	unsigned int num;

	if (n < 0)
	{
		num = -n;
		_putchar(45);
	} else
	{
		num = n;
	}

	if (num / 10)
	{
		print_number(num / 10);
	}

	_putchar((num % 10) + '0');
}
