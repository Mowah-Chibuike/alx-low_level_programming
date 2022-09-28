#include "main.h"

/**
 * check_sqrt - calculates the square root of a number
 * @i: guessed square root
 * @j: number to be checked
 *
 * Return: square root of the number
 */

int check_sqrt(int i, int j)
{
	if (i * i > j)
	{
		return (-1);
	}
	if (i * i == j)
	{
		return (i);
	}

	return (check_sqrt(i + 1, j);
}

/**
 * _sqrt_recursion - calls the check_sqrt function and returns the value
 * @n: number to be checked
 *
 * Returns: the square root of a number or -1
 */

int _sqrt_recursion(int n)
{
	if (n == 0)
	{
		return (0);
	}
	return (check_sqrt(1, n));
}
