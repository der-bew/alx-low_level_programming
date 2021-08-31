#include "main.h"

/**
 *_abs - Computes the absolute value of an integer
 *
 *@n: Input intiger
 *
 *Return: (n) or (-n)
 */

int _abs(int n)
{
	if (n < 0)
		return (-n);
	else
		return (n);
}
