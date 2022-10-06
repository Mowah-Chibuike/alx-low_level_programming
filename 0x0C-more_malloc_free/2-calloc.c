#include "main.h"

/**
 * _calloc - void *_calloc(unsigned int nmemb, unsigned int size);
 * @nmemb: number of elements
 * @size: size of elements
 *
 * Return:  a pointer to the allocated memory. Otherwise NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	void *arr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	arr = malloc(nmemb * size);
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		arr[i] = 0;

	return (arr);
}
