#include <stdio.h>

/**
 *main - Satrting point
 *
 *Return: zero
 *
 *Descripitions: Prints all possible different combinations of two two digits
 */

int main(void)
{
	int num1, num2;

	for (num1 = 0; num1 <= 99; num1++)
	{
		for (num2 = 0; num2 <= 99; num2++)
		{
			if (((num1 == 0) && (num2 != 0)) || (num1 < num2))
			{
				putchar(num1 / 10 + '0');
				putchar(num1 % 10 + '0');
				putchar(' ');
				putchar(num2 / 10 + '0');
				putchar(num2 % 10 + '0');
				if (num1 < 98)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
