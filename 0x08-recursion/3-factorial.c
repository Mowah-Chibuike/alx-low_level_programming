#include "main.h"

/**
 * factorial - calculates the factorial of a given number
 * @n: the number
 *
 * Return: void
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}

	return (n * factorial(n - 1));
}
