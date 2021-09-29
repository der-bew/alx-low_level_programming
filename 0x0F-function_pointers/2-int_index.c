#include "function_pointers.h"
/**
 *int_index - search for an integer
 *@array: Input array
 *@size: The number of elements of the array
 *@cmp: The pointer to a function
 *
 *Return: the index of the first element
 *If no element matches, return -1
 *if size <= 0, return -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array != NULL && cmp != NULL)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
			{
				return (i);
			}
		}
	}

	return (-1);
}
