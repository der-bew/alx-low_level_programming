#include <stdio.h>

/**
 *main - Finds and prints the sum of the even-valued terms
 *
 *Return: Always (0)
 */

int main(void)
{
	int i, j, total, z;

	i = 1;
	j = 2;
	total = 0;

	while (j < 4000000)
	{
		if (j % 2 == 0)
		{
			total += j;
		}
		z = j;
		j += i;
		i = z;
	}
	printf("%d\n", total);
	return (0);
}
