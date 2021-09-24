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
	unsigned int i = 0, j, k = 0;
	char *ptr;

	while (s1 && s1[i] != '\0')
		i++;

	while (s2 && s2[k] != '\0')
		k++;

	if (n <= k)
		n = k;

	ptr = malloc(sizeof(*ptr) * (i + n + 1));
	if (ptr == NULL)
	{
		return (NULL);
	}

	for (j = 0; s1[j] != '\0'; j++)
	{
		ptr[j] = s1[j];
	}
	for (j = 0; s2[j] != '\0' && j != n; j++, i++)
	{
		ptr[i] = s2[j];
	}
	ptr[i] = '\0';
	return (ptr);
}
