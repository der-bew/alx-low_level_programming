#include <stdio.h>
#include "main.h"
/**
 *main - Prints its name
 *@argc: Argument counter
 *@argv: Argumnet array
 *Return: Always (0)
 */

int main(int argc, char **argv __attribute__((unused)))
{
	printf("%d\n", argc - 1);

	return (0);
}
