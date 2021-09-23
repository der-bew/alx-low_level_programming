#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 **string_nconcat - Concatenates two string
 *@s1:First string
 *@s2:second string
 *@n: size
 *Return: Pointer
 *
 *The returned pointer shall point to a newly allocated space
 * in memory, which contains s1, followed by the first n bytes
 * of s2, and null terminated
 *If the function fails, it should return NULL
 *If n is greater or equal to the length of s2 then use the entire string s2
 *if NULL is passed, treat it as an empty string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, j = 0, k = 0, l = 0;
	char *ptr;

	while (s1 && s1[i])
		i++;

	while (s2 && s2[k])
		k++;

	if (n >= k)
		l = i + k;
	else
		l = i + n;

	ptr = malloc(sizeof(char) * l + 1);
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
	str[j] = '\0';
	return (ptr);
}
