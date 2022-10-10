#include "dog.h"

/**
 * init_dog - function that initializes a variable of type struct dog
 * @d: pointer to variable of struct dog type
 * @name: name of the dog to be initialized
 * @age: age of the dog to be initialized
 * @owner: owner of the dog to be initialized
 *
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
