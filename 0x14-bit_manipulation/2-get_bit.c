#include "main.h"


/**
 * get_bit - gets the value of a bit at a given index.
 * @n: the number to be converted to binary
 * @index: index is the index, starting from 0 of the bit you want to get
 *
 * Return: the value of a bit atagiven index.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	signed long int size;

	size = sizeof(n) * 8 - 1;
	if (index > size)
		return (-1);
	return ((n >> index) & 1);
}
