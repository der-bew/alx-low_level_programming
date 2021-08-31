#include "main.h"
#include <stdio.h>

/**
 *print_to_98 - Prints all natural numbers n to 98
 *
 *@n: First integer
 *
 *Return: Nothing return
 */

void print_to_98(int n)
{
	if (n < 98)
	{
		while (n < 98)
		{
			printf("%d, ", n);
			n++;
		}
	}
	else if (n > 98)
	{
		while (n > 98)
		{
			printf("%d, ", n);
			n--;
		}
	}
	else
	{
		printf("%d\n", n);
	}
}
