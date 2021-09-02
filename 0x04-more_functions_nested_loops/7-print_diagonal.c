#include "main.h"

/**
 *print_diagonal - Draws a diagonal line
 *@n: Input integer
 *Return: Nothing return
 */

void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i, j;

		for (i = 1; i <= n; i++)
		{
			for (j = i; j > 1; j--)
			{
				_putchar(32);
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
