#include "main.h"

/**
 *print_alphabet - Prints the alphabet in lowercase
 *
 *Return: Nothing return
 */

void print_alphabet(void)
{
	char alp;

	for (alp = 'a'; alp <= 'z'; alp++)
	{
		_putchar(alp);
	}
	_putchar('\n');
}
