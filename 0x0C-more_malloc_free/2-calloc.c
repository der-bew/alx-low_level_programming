#include "main.h"
#include <stdlib.h>
/**
 **_calloc - Allocates memory for an array, using malloc
 *@nmemb: Number of array elements
 *@size: Memory size
 *Return: pointer to the allocated mem
 *
 *The memory is set to zero
 *If nmemb or size is 0, then _calloc returns NULL
 *If malloc fails, then _calloc returns NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < (nmemb * size); i++)
	{
		ptr[i] = 0;
	}

	return (ptr);
}
