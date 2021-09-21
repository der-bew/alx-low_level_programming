#include "main.h"
#include <stdlib.h>
/**
 **str_concat - Concatenates two strings
 *@s1: First string
 *@s2: Second string
 *Return: (NULL) on failur or ponter
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int len1, len2, i;
	char *x;

	len1 = 0;
	len2 = 0;
	if (s1)
	{
		while (s1[len1])
			len1++;
	}
	if (s2)
	{
		while (s2[len2])
			len2++;
	}

	x = malloc((len1 + len2 + 1) * sizeof(char));
	if (x == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len1; i++)
	{
		x[i] = s1[i];
	}
	for (i = 0; i < len2; i++)
	{
		x[len1 + i] = s2[i];
	}
	x[len1 + len2] = '\0';
	return (x);
}
