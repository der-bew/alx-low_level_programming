#include "main.h"

/**
 *times_table - Prints the 9 times table starting from 0
 *
 *Return: Nothing return
 */

void times_table(void)
{
	int i, j, result;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			result = i * j;
			
			if (result >  9)
			{
				_putchar(result / 10 + '0');
				_putchar(result % 10 + '0');
			}
			else if (j != 0)
			{
				_putchar(32);
				_putchar(result + '0');
			}
			else
			{
				_putchar(j + '0');
			}

			if (j !=9)
			{
				_putchar(44);
				_putchar(32);
			}
		}
		_putchar('\n');
	}
}
			
