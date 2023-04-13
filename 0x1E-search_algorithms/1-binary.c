#include "search_algos.h"

/**
 * print_subarray - prints a subarray
 * @array: array to print from
 * @start: lowest index in the subarray
 * @stop: the highest index in the subarray
 */
void print_subarray(int *array, int start, int stop)
{
	int i;
	char *delim = "";

	for (i = start; i <= stop; i++)
	{
		printf("%s%d", delim, array[i]);
		delim = ", ";
	}
	putchar('\n');
}

/**
 * binary_searcher - recursively searches for a value in a sorted array
 * @array: array to search in
 * @lo: lowest index in array to start search from
 * @hi: highest index in array to stop search
 * @value: value to be searched for
 *
 * Return: the index where value is stored, otherwise -1
 */
int binary_searcher(int *array, int lo, int hi, int value)
{
	int mid;

	printf("Searching in array: ");
	print_subarray(array, lo, hi);
	mid = (lo + hi) / 2;
	if (array[mid] == value)
		return (mid);
	if (lo == mid)
		return (-1);
	if (array[mid] > value)
		return (binary_searcher(array, lo, mid - 1, value));
	return (binary_searcher(array, mid + 1, hi, value));
}

/**
 * binary_search - searches for a value in a sorted array of integers using the
 * Binary search algorithm
 * @array: array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: index where value is located, otherwise -1
 */
int binary_search(int *array, size_t size, int value)
{
	return (binary_searcher(array, 0, (int)size - 1, value));
}
