#include "main.h"
#include <stdio.h>

/**
 * set_bit - sets the value of a bit to 1 at any given index
 * @n: pointer to the integer whose bit you want to set to 1
 * @index: the indesx starting from 0 of the bit you want to set
 *
 * Return: 1 if it worked or -1 if an error occurred
 */
int set_bit(unsigned long int *n, __attribute__((unused))unsigned int index)
{
	unsigned long int size;

	size = sizeof(*n) * 8 - 1;
	if (size < index)
		return (-1);
	*n = *n | (1 << index);
	return (1);
}
