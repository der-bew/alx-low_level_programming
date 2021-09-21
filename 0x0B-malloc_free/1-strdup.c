#include "main.h"
#include <stdlib.h>
/**
 **_strdup - returns a pointer to a newly allocated space in memory,
 *which contains a copy of the string given as a parameter
 *@str: Input string
 *Return: (NULL) if str == NULL
 *Pointer to array or NULL if insufficient memory was available
 */

char *_strdup(char *str)
{
	char *x;
	unsigned int i = 0;

	x = malloc(10 * sizeof(char));
	if (str == NULL)
	{
		return (NULL);
	}
	else
	{
		if (x == NULL)
		{
			return (NULL);
		}

		while (str[i] != '\0')
		{
			x[i] = str[i];
			i++;
		}
	}

	return (x);
}
