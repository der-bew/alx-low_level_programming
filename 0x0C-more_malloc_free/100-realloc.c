#include "main.h"
#include <stdlib.h>
/**
 **_realloc - Reallocates a memory block using malloc and free
 *@ptr: Pointer to the memory previously allocated
 *@old_size: The size, in bytes allocated space for ptr
 *@new_size: New size, in bytes of the new memory block
 *Return: ptr
 *
 *The contents will be copied to the newly allocated space,
 * in the range from the start of ptr up to the minimum of
 * the old and new sizes
 *If new_size > old_size, the “added” memory should not be initialized
 *If new_size == old_size do not do anything and return ptr
 *If ptr is NULL, then the call is equivalent to malloc(new_size),
 * for all values of old_size and new_size
 *If new_size is equal to zero, and ptr is not NULL, then the call
 *is equivalent to free(ptr). Return NULL
 *Don’t forget to free ptr when it makes sense
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *ptr2, *copyptr;
	unsigned int i;

	if (new_size == old_size)
	{
		return (ptr);
	}
	if (ptr != NULL && new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		ptr2 = malloc(new_size);
		if (ptr2 == NULL)
		{
			return (NULL);
		}
		return (ptr2);
	}

	ptr2 = malloc(new_size);
	if (ptr2 == NULL)
	{
		return (NULL);
	}
	copyptr = ptr;
	for (i = 0; i < old_size; i++)
	{
		ptr2[i] = copyptr[i];
	}
	free(ptr);
	return (ptr2);
}
