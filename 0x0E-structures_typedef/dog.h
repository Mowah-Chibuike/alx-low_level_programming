#ifndef DOG_H
#define DOG_H

/**
 * struct dog - initialize a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Description: name and owner are strings and age is of type float.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
}

#endif /* DOG_H */
