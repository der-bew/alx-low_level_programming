#include "main.h"
#include <stdlib.h>
/**
 **string_nconcat - Concatenates two string
 *@s1:First string
 *@s2:second string
 *@n: size
 *Return: Pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, j = 0, k = 0, l = 0;
	char *ptr;

	while (s1 && s1[i] != '\0')
		i++;

	while (s2 && s2[k] != '\0')
		k++;

	if (n < k)
		n = k;
 
	ptr = malloc(sizeof(*ptr) * (i + n + 1));
	if (ptr == NULL)
	{
		return (NULL);
	}

	k = 0;
	while (j < l)
	{
		if (j <= i)
			ptr[j] = s1[j];

		if (j >= i)
		{
			ptr[j] = s2[k];
			k++;
		}
		j++;
	}
	ptr[j] = '\0';
	return (ptr);
}
