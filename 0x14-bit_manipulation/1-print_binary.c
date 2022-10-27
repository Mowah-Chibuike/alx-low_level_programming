#include "main.h"
#include <limits.h>

/**
 * _pow - calculates the result of a number to the power of another number
 * @base: base number
 * @power: power of the base number
 *
 * Return: the result of the base to the power of power
 */
unsigned long int _pow(int base, int power)
{
	unsigned int result = 1;
	int i;

	for (i = 0; i < power; i++)
		result *= base;
	return (result);
}

/**
 * print_binary - prints the binary representation of a number.
 * @n: decimal number to be printed in binary notation
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int sum = 0, exponent;
	int i;

	if (n == 0 || n == 1)
	{
		_putchar(n + '0');
		return;
	}
	for (i = 31; i >= 0; i--)
	{
		exponent = _pow(2, i);
		if (exponent < n)
		{
			sum += exponent;
			if (sum > n)
			{
				sum -= exponent;
				_putchar('0');
			}
			else
				_putchar('1');
		}
	}
}
