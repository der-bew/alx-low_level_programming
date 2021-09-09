#include "main.h"
/**
 **infinite_add - Adds two numbers
 *Where n1 and n2 are the two numbers
 *r is the buffer that the function will use to store the result
 *size_r is the buffer size
 *You can assume that you will always get positive numbers, or 0
 *You can assume that there will be only digits in the strings n1 and n2
 *n1 and n2 will never be empty
 *@n1: First Integer
 *@n2: Second integer
 *@r: Used for storing the result
 *@size_r: The buffer size
 *If the result can not be stored in r the function must return 0
 *Return: (r) and r is empty return (0)
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i = 0, j = 0, k, l = 0, f, s, d = 0;

	while (n1[i] != '\0')
		i++;
	while (n2[j] != '\0')
		j++;
	if (i > j)
		l = i;
	else
		l = j;
	if (l + 1 > size_r)
		return (0);
	r[l] = '\0';
	for (k = l - 1 ; k >= 0 ; k--)
	{
		i--;
		j--;
		if (i >= 0)
			f = n1[i] - '0';
		else
			f = 0;
		if (j >= 0)
			s = n2[j] - '0';
		else
			s = 0;
		r[k] = (f + s + d) % 10 + '0';
		d = (f + s + d) / 10;
	}
	if (d == 1)
	{
		r[l + 1] = '\0';
		if (l + 2 > size_r)
			return (0);
		while (l-- >= 0)
			r[l + 1] = r[l];
		r[0] = d + '0';
	}
	return (r);
}
