#include "main.h"
#include <stdlib.h>

/**
 * reverse_array - reverses the contents of an array
 * @a: array of integers
 * @n: legth of the array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i, b;
	int *s = malloc(sizeof(int) * n);

	for (i = 0; i < n; i++)
	{
		s[i] = a[i];
	}

	b = 0;
	while (b < n)
	{
		a[b] = s[i - 1];
		b++;
		i--;
	}
}
