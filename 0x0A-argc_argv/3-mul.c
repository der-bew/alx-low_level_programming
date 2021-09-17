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
	int num1, num2, res;

	if (argc != 3)
	{
		printf("Errors\n");
		return (1);
	}
	else
	{
		num1 = atoi(argv[1]);
	        num2 = atoi(argv[2]);
		res = num1 * num2;
		printf("%d\n", res);
	}

	return (0);
}
