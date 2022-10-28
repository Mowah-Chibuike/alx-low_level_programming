#include "main.h"

/**
 * get_endianness - returns the endianess of a computer's processor
 *
 * Return: 1 for litte endian and 0 for big endian
 */
int get_endianness(void)
{
	unsigned int i;

	return ((int)(((char *)&i)[0]));
}
