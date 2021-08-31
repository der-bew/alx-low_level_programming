#include <stdio.h>

/**
 *main - Prints the first Fibonacci numbers
 *
 *Return: Always (0)
 */

int main(void)
{
	int num;
	long num_list[50];

	num_list[0] = 1;
	num_list[1] = 2;

	for (num = 2; num < 50; num++)
	{
		num_list[num] = num_list[num - 1] + num_list[num - 2];
	}
	for (num = 0; num < 49; num++)
	{
		printf("%li, ", num_list[num]);
	}
	printf("%li\n", num_list[num]);
	return (0);
}
