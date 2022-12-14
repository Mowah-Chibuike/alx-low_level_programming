#include "hash_tables.h"

/**
 * hash_djb2 - a hash function implementing the djb2 algorithm.
 * @str: key from which index would be generated
 *
 * Return: index associated with the key identified by str
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	int c;
	unsigned long int hash = 5381;

	while ((c = *str++))
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c*/
	return (hash);
}
