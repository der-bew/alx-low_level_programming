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
	int i, j, sum1, sum2, sum3;

	sum1 = 0;
	sum2 = 0;
	for (i = 0; i < size; i++)
	{
		sum3 = (i * size) + i;
		sum1 += a[sum3];
	}
	for (j = 0; j < size; j++)
	{
		sum3 = (j * size) + (size - 1 - j);
		sum2 += a[sum3];
	}
	printf("%i, %i\n", sum1, sum2);
}
