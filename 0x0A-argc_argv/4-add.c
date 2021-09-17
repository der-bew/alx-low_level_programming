#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 *main - Adds positive numbers
 *@argc: Argument counter
 *@argv: Argumnet array
 *Return: Always (0)
 */

int main(int argc, char *argv[])
{
	int i, j, sum = 0;

	if (argc < 1)
	{
		printf("%d\n", 0);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j] != '\0'; j++)
			{
				if (argv[i][j] > '9' || argv[i][j] < '0')
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
	}

	return (0);
}
