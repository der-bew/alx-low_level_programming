#include "main.h"

int sqrt_checker(int num1, int num2);
/**
 *_sqrt_recursion - Returns the natural sqrt of a num
 *@n: Input integer
 *Return: The result
 */

int _sqrt_recursion(int n)
{
	if (n == 0)
	{
		return (0);
	}
	return (sqrt_checker(1, n));
}

/**
 *sqrt_checker - check the sqrt of num2
 *@num1: guss at sqrt
 *@num2: Input int
 *Return: sqrt of num2
 */

int sqrt_checker(int num1, int num2)
{
	if (num1 * num1 == num2)
	{
		return (num1);
	}
	if (num1 * num1 > num2)
	{
		return (-1);
	}
	return (sqrt_checker(num1 + 1, num2));
}
