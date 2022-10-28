#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip to get from
 * one number to another.
 * @n: first number.
 * @m: second number.
 *
 * Return: the number of bits you would need to flip to get from one number to
 * another
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;
	signed long int size;
	unsigned long int x_diff; /* product of xor operation */
	char num;

	size = sizeof(n) * 8 - 1;
	x_diff = n ^ m;
	while (size >= 0)
	{
		num = (x_diff >> size) & 1;
		if (num == 1)
			count++;
		size--;
	}
	return (count);
}
