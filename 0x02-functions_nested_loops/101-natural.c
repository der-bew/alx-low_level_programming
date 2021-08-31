#include <stdio.h>

/**
 *main - starting point
 *
 *Return: Aways (0)
 */

int main(void)
{
	int num = 1, sum = 0;

	while (num < 1024)
	{
		if ((num % 5 == 0) || (num % 3 == 0))
		{
			sum += num;
		}
		num++;
	}
	printf("%d\n", sum);

	return (0);
}
