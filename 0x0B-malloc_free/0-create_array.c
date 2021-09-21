#include "main.h"
#include <stdlib.h>
/**
 **create_array - Creates an array of chars
 *and initializes with a spacfic char
 *@size: The memory size
 *@c: Input character
 *Return: pointer to array or (NULL) if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *x;
	unsigned int i = 0;

	if (size == 0)
	{
		return (NULL);
	}
	else
	{
		x = malloc(size * sizeof(char));
		if (x == NULL)
		{
			return (NULL);
		}
		while (i < size)
		{
			x[i] = c;
			i++;
		}
	}
	return (x);
}
