#include "search_algos.h"

/**
 * jump_search - searches for a value in a sorted array of integers using the
 * Jump search algorithm
 * @array: array to search in
 * @size: size of the array
 * @value: value to search for
 *
 * Return: first index where value is located, otherwise -1
 */
int jump_search(int *array, size_t size, int value)
{
	int jump, lo, hi;

	if (!array || size == 0)
		return (-1);
	jump = sqrt((double)size);
	lo = 0;
	hi = lo + jump;
	while (hi < (int)size)
	{
		printf("Value checked array[%d] = %d\n", lo, array[lo]);
		if (array[hi] >= value)
		{
			printf("Value found between indexes [%d] and [%d]\n", lo, hi);
			break;
		}
		else
		{
			lo += jump;
			hi += jump;
			if (hi > (int)size)
			{
				printf("Value checked array[%d] = %d\n", lo, array[lo]);
				printf("Value found between indexes [%d] and [%d]\n", lo, hi);
			}
			continue;
		}
	}
	hi = hi > (int)size ? (int)size : hi + 1;
	for (; lo < hi && lo < (int)size; lo++)
	{
		printf("Value checked array[%d] = %d\n", lo, array[lo]);
		if (array[lo] == value)
			return (lo);
	}
	return (-1);
}
