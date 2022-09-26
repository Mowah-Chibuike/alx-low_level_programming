#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sums of the two diagonals of a square matrix
 * @a: pointer to start of matrix
 * @size: width of matrix column
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i, j, p, y = 0, z = 0;

	for (i = 0; i < size; i++)
	{
		p = (i * size) + i;
		y += *(a + p);
	}
	for (j = 0; j < size; j++)
	{
		p = (j * size) + (size - 1 - j);
		z += *(a + p);
	}
	printf("%d, %d\n", y, z);
}
