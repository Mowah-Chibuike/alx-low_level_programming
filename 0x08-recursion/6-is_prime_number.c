#include "main.h"

/**
 * prime_check - function checks if number is prime
 * @i: divisor
 * @j: number to be checked
 *
 * Return: 1 if number is prime or 0 if number is not prime
 */

int prime_check(int i, int j)
{
	if ((j % i) == 0)
	{
		return (0);
	}
	if (((j % i) > 0) && (i >= (j / 2)))
	{
		return (1);
	}

	return (prime_check(i + 1, j));
}

/**
 * is_prime_number - calls the prime_check function
 * @n: number to be checked
 *
 * Return: 1 if numer is prime or 0 if number is not prime
 */

int is_prime_number(int n)
{
	if (n < 2)
	{
		return (0);
	}
	if (n == 2)
	{
		return (1);
	}

	return (prime_check(2, n));
}
