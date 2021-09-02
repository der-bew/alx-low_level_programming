#include <stdio.h>
#include <math.h>

/**
 *main - Finds and prints the largest prime factor
 *Return: Always (0)
 */

int main(void)
{
	long int num, i, res;

	num = 612852475143;
	while (num % 2 == 0)
	{
		res = 2;
		num = num / 2;
	}
	for (i = 3; i <= sqrt(num); i += 2)
	{
		while (num % i == 0)
		{
			res = i;
			num = num / i;
		}
	}
	if (num > 2)
	{
		res = num;
	}
	printf("%ld\n", res);

	return (0);
}
