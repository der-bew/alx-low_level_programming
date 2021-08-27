#include <stdio.h>

/**
 *main - Satrting point
 *
 *Return: zero
 *
 *Descripitions: Prints single digit number using putchar
 */

int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	putchar(num + '0');
	putchar('\n');

	return (0);
}
