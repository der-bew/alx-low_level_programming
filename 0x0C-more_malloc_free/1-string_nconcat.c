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
	unsigned int i, j, k;
	char *ptr = NULL;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		;

	for (j = 0; s2[j] != '\0'; j++)
		;

	if (j <= n)
		n = j;

	ptr = malloc((i + n + 1) * sizeof(char));

	if (ptr == NULL)
		return (NULL);

	for (k = 0; s1[k] != '\0'; k++)
		ptr[k] = s1[k];

	for (k = 0; k < n; k++)
		ptr[k + i] = s2[k];

	ptr[k + i] = '\0';

	return (ptr);
}
