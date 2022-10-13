#include "function_pointers.h"

/**
 * array_iterator - executes a function passed to it as an argument on each
 * item in an array
 * @array: the array to be operated on
 * @size: size of the array
 * @action: function to be executed on each item of array
 *
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
