#include "main.h"
/**
 *print_diagsums - prints the sum of the two diagonals of a square
 * matrix of integers
 *@a: Input integer
 *@size: size
 *Return: Nothing
 */

void print_diagsums(int *a, int size)
{
	int i;

	unsigned int sum1, sum2;

	sum1 = 0;
	sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += a[(size * i) + i];
		sum2 += a[(size * (i + 1)) - (i + 1)];
	}

	printf("%i, %i\n", sum1, sum2);
}
