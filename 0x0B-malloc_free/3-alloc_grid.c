#include "main.h"
#include <stdlib.h>
/**
 * **alloc_grid - Returns a pointer to a 2 dimensional array of integers
 *@width: Width
 *@height: Height
 *Return: (NULL) on failure
 *If width or height is 0 or negative, return NULL
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **x;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	x = (int **)malloc(sizeof(int *) * height);
	if (x == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		x[i] = (int *)malloc(sizeof(int) * width);
		if (x[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(x[j]);
			}
			free(x);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			x[i][j] = 0;
		}
	}
	return (x);
}
