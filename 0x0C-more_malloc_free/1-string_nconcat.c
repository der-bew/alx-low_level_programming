#include "main.h"
#include <stdlib.h>

int _strlen(char *str);

/**
 *string_nconcat - concaten string
 *@s1: string s1
 *@s2: string s2
 *@n: int
 *
 *Return: char pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, j, l_s1 = _strlen(s1), l_s2 = _strlen(s2), cal = 0;
	char *p;

	if (l_s2 > n)
		l_s2 = l_s2 - (l_s2 - n);

	cal = l_s1 + l_s2 + 1;

	p = malloc(cal * sizeof(char));
	if (p == NULL)
		return (NULL);

	for (j = 0; j < l_s1; j++, i++)
		p[i] = s1[j];

	for (j = 0; j < l_s2; j++, i++)
		p[i] = s2[j];

	p[i] = '\0';

	return (p);
}


/**
 *_strlen - str len the string
 *@str: string
 *
 *Return: int
 */
int _strlen(char *str)
{
	int i = 0;

	if (str != NULL)
	{
		for (; str[i] != '\0';)
			i++;
	}

	return (i);
}
