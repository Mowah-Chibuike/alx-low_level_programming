#include "main.h"

/**
 * crete_array -  creates an array of chars, and initializes it with a
 * specific char.
 * @size: length of the array
 * @c: character to initialize the array with
 *
 * Return: a pointer to the array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	int i;
	char *str;

	if (size < 1)
	{
		return (NULL);
	}

	str = (char *)malloc(sizeof(char) * size);
	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		str[i] = c;
	}

	str[i] = '\0';
	return (str);
}
