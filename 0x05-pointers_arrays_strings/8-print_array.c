#include <stdio.h>

/**
 * print_array - prints a specified number of elements in an array
 * @a: the array that contains elements to be printed
 * @n: the number of elements to be printed
 *
 *
 * Return: void
 */

void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		printf("%d", *(a + i));
		if (i < (n - 1))
		{
			printf(", ");
		}
		i++;
	}
	printf("\n");
}
