#include "main.h"

/**
 *print_most_numbers - prints numbers except 2 and 4
 *Return: Nothing return
 */

void print_most_numbers(void)
{
	int n;

	n = 48;
	while (n <= 57)
	{
		if ((n != 2) && (n != 4))
		{
			_putchar(n);
		}
		n++;
	}
	_putchar('\n');
}
