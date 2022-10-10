#include "main.h"

/**
 * free_dog - frees memory used by a dog structure
 * @d: pointer to initialized dog
 *
 * Return: void
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
