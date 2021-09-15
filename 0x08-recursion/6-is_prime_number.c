#include "main.h"

int prime_checker(int fact, int prime);

/**
 *is_prime_number - Check a given number is a prime
 *@n: Input integer
 *Return: (1) number is prime else (0)
 */

int is_prime_number(int n)
{
	if (n == 2)
	{
		return (1);
	}
	return (prime_checker(2, n));
}

/**
 *prime_checker - Check a num is prime
 *@fact: factor check
 *@prime: prime num
 *Return: (1) 0r (0)
 */

int prime_checker(int fact, int prime)
{
	if (prime < 2 || prime % fact == 0)
	{
		return (0);
	}
	else if (fact > prime / 2)
	{
		return (1);
	}
	else
	{
		return (prime_checker(fact + 1, prime));
	}
}
