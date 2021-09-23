#include "main.h"
#include <stdlib.h>
/**
 **malloc_checked - Allocates memoery using malloc
 *@b: size of memory
 *Return: Pointer to the allocated memory
 *if malloc fails, the malloc_checked function should cause
 * normal process termination with a status value of 98
 */

void *malloc_checked(unsigned int b)
{
	void *ptr = NULL;

	ptr = malloc(b);
	if (ptr == NULL)
	{
		exit(98);
	}

	return (ptr);
}
