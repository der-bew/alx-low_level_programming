#include <stdio.h>

/**
 *main - Satrting point
 *
 *Return: zero
 *
 *Descripitions: Prints Alphabet in Lowercase
 */

int main(void)
{
	for (char alp = 'a'; alp < 'z'; alp++)
	{
		putchar(alp);
		putchar('\n');
	}
	return (0);
}
