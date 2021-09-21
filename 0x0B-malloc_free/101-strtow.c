#include "main.h"
#include <stdlib.h>
/**
 * word_count - Count the number of words in a string
 * @s: Input string
 * Return: Number of words
 */
int word_count(char *s)
{
	int x, count, word;

	x = 0;
	word = 0;
	count = 0;
	while (s[count] != '\0')
	{
		if (s[count] == ' ')
		{
			x = 0;
		}
		else if (x == 0)
		{
			x = 1;
			word++;
		}
		count++;
	}

	return (word);
}
/**
 * **strtow - Splits a string into words
 * @str: Input string
 *Each element of this array should contain a
 *single word, null-terminated
 *Returns NULL if str == NULL or str == ""
 * Return: pointer to an array of strings (Success)
 * or NULL (Error)
 */

char **strtow(char *str)
{
	char **wc, *tmp;
	int i, k = 0, length = 0, words, c = 0, start, end;

	while (*(str + length))
		length++;

	words = word_count(str);
	if (words == 0)
		return (NULL);

	wc = (char **) malloc(sizeof(char *) * (words + 1));
	if (wc == NULL)
		return (NULL);
	for (i = 0; i <= length; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (c)
			{
				end = i;
				tmp = (char *) malloc(sizeof(char) * (c + 1));
				if (tmp == NULL)
					return (NULL);
				while (start < end)
				{
					*tmp++ = str[start++];
				}
				*tmp = '\0';
				wc[k] = tmp - c;
				k++;
				c = 0;
			}
		}
		else if (c++ == 0)
		{
			start = i;
		}
	}
	wc[k] = NULL;
	return (wc);
}
