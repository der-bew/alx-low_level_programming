#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 *main - Multiplies two numbers
 *@argc: Argument counter
 *@argv: Argumnet array
 *Return: Always (0)
 */

int main(int argc, char *argv[])
{
	int i, res = 1;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			res *= atoi(argv[i]);
		}
		printf("%d\n", res);
	}

	return (0);
}
