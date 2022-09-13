#include "main.h"

/**
 * _abs - computes absolute value of an integer
 * @n: integer, positive or negative
 *
 * Return: the absolute value of n
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}
	else
	{
		return (n);
	}
}
