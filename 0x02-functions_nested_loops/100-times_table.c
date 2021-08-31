#include "main.h"

/**
 *print_times_table - Prints the n times table starting from 0
 *@n: Input integer
 *Return: Nothing return
 */

void print_times_table(int n)
{
	int i = 0, j, result;

	if (n > 15 || n < 0)
		return;
	while (i <= n)
	{
		for (j = 0; j <= n; j++)
		{
			result = i * j;
			if (result > 99)
			{
				_putchar(result / 100 + '0');
				_putchar((result / 10 % 10) + '0');
				_putchar(result % 10 + '0');
			}
			else if (result > 9)
			{
				_putchar(32);
				_putchar(result / 10 + '0');
				_putchar(result % 10 + '0');
			}
			else if (j != 0)
			{
				_putchar(32);
				_putchar(32);
				_putchar(result + '0');
			}
			else
				_putchar(result + '0');

			if (j != n)
			{
				_putchar(44);
				_putchar(32);
			}
		}
		_putchar('\n');
		i++;
	}
}
