#include <stdio.h>
#include <math.h>

/**
 *main - Finds and prints the largest prime factor
 *Return: Always (0)
 */

int main(void)
{
	long int num, i;

	num = 612852475143;
	while (num % 2 == 0)
	{
		printf("%d", 2);
		num = num / 2;
	}
	for (i = 3; i <= sqrt(num); i += 2)
	{
		while (num % i == 0)
		{
			printf("%ld", i);
			num = num / i;
		}
	}
	if (num > 2)
	{
		printf("%ld", num);
	}
	printf("\n");

	return (0);
}
