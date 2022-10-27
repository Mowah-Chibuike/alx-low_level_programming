#include "main.h"
#include <string.h>

/**
 * _pow - calculates the result of a number to the power of another number
 * @base: base number
 * @power: power of the base number
 *
 * Return: the result of the base to the power of power
 */
unsigned int _pow(int base, int power)
{
	unsigned int result = 1;
	int i;

	for (i = 0; i < power; i++)
		result *= base;
	return (result);
}

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: string of 0 and 1 chars
 *
 * Return: the converted number, or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int sum = 0;
	int i, length, n, bit;

	if (b == NULL)
		return (0);
	length = strlen(b);
	n = length - 1;
	i = 0;
	while (i < length)
	{
		bit = b[i] - '0';
		if (bit > 1)
			return (0);
		sum += _pow(2, n) * bit;
		i++;
		n--;
	}
	return (sum);
}
