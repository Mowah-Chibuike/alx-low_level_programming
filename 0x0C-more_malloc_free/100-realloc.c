#include "main.h"

/**
 * _realloc: reallocates a memory block using malloc and free
 * @ptr: pointer to the memory previously allocated with a call to malloc
 * @old_size: the size, in bytes, of the allocated space for ptr
 * @new_size: new size, in bytes of the new memory block
 *
 * Return: pointer to the newly allocated space in memory
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	int i;
	char *ptr2, *oldp;

	oldp = ptr;
	if (ptr == NULL)
	{
		*ptr2 = malloc(new_size);
		return (ptr2);
	}
	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	else if (new_size == old_size)
		return (ptr);

	ptr2 = malloc(new_size);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < old_size; i++)
		ptr2[i] = oldp[i];
	free(ptr);
	return (ptr2);
}
