#include "main.h"
#include <stdlib.h>
/**
 **argstostr - Concatenates all the arguments of your program
 *@ac: Argument count
 *@av: Argument vactor
 *Return: (NULL) if ac == 0 or av == NULL
 *Returns a pointer to a new string, or NULL if it fails
 */

char *argstostr(int ac, char **av)
{
	char *x, *newstr;
	int i, j, length;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (i = 0, length = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++, length++)
			;
		length++;
	}
	length++;

	x = malloc(length * sizeof(char));
	if (x == NULL)
	{
		return (NULL);
	}

	newstr = x;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			*x = av[i][j];
			x++;
		}
		*x = '\n';
		x++;
	}

	return (newstr);
}
