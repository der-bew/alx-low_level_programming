#include "main.h"
#include <stdlib.h>
/**
 **array_range - Creates an array of integers
 *@min: Start 
 *@max: end
 *Return: Pointer to the newly created array
 *
 *The array created should contain all the values from min
 * (included) to max (included), ordered from min to max
 *If min > max, return NULL
 *If malloc fails, return NULL
 */

int *array_range(int min, int max)
{
	int *ptr, i, j, k;

	if (min > max)
	{
		return (NULL);
	}

	for (i = min; i <= max; i++)
		;
	ptr = malloc(i * sizeof(int));

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (j = 0, k = min; k <= max; j++, k++)
	{
		ptr[j] = k;
	}

	return (ptr);
}
