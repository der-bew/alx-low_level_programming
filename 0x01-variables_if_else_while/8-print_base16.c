#include <stdio.h>

/**
 *main - Satrting point
 *
 *Return: zero
 *
 *Descripitions: Prints Hexadecimal numbers in Lowercase
 */

int main(void)
{
	char alp;

	for (alp = 0; alp <= 9; alp++)
	putchar(alp + '0');
	for (alp = 'a'; alp <= 'f'; alp++)
	putchar(alp);
	putchar('\n');

	return (0);
}
