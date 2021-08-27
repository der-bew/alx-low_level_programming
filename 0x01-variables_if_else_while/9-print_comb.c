#include <stdio.h>

/**
 *main - Satrting point
 *
 *Return: zero
 *
 *Descripitions: Prints all possible combinations of single-digit numbers
 */

int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		putchar(num + '0');
		if (num < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
