#include "holberton.h"
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
	int i, j, p, d1 = 0, d2 = 0;

	for (i = 0; i < size; i++)
	{
		p = (i * size) + i;
		d1 += *(a + p);
	}
	for (j = 0; j < size; j++)
	{
		p = (j * size) + (size - 1 - j);
		d2 += *(a + p);
	}
	printf("%i, %i\n", d1, d2);
}
