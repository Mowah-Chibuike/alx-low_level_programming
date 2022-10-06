#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: minimum and first integer to be in the array
 * @max: maximum and last integer to be in the array
 *
 * Return: pointer to the newly created array of integers, Otherwise, NULL
 */

int *array_range(int min, int max)
{
	int i, j;
	int *arr;

	if (min > max)
		return (NULL);

	for (j = 1, i = min; i <= max; i++, j++)
		;
	j--;
	arr = (int *)malloc(sizeof(int) * j);
	if (arr == NULL)
		return NULL;
	for (j = 0, i = min; i <= max; i++, j++)
		arr[j] = i;

	return (arr);
}
