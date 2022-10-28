#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @n: pointer to the number whose bit you want to clear
 * @index: index of the bit you want to clear
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int size;

	size = sizeof(*n) * 8 - 1;
	if (size < index)
		return (-1);
	*n = *n & ~(1 << index);
	return (1);
}
