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
	int *ptr, i, j;

	if (min > max)
	{
		return (NULL);
	}

	ptr = malloc((max - min + 1) * sizeof(int));

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (j = 0, i = min; i <= max; j++, i++)
	{
		ptr[j] = i;
	}

	return (ptr);
}
