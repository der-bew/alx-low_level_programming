#include <stdio.h>

/**
 *main - Satrting point
 *
 *Return: zero
 *
 *Descripitions: Prints Alphabet in Lowercase reverse
 */

int main(void)
{
	char alp;

	for (alp = 'z'; alp >= 'a'; alp--)
	putchar(alp);
	putchar('\n');

	return (0);
}
