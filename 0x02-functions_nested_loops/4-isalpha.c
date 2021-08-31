#include "main.h"

/**
 *_isalpha - Checks for alphabetic character
 *
 *@c: Input data
 *
 *Return: (1) if c is a letter, and 0 otherwise
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) && (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}
