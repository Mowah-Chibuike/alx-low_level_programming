#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: size of he triangle
 *
 *
 * Return: void
 */

void print_triangle(int size)
{
	int i = 0;
	int hashes = size;

	while (size > 0)
	{
		int spaces = size - 1;
		int count = hashes - (hashes - i) + 1;

		while (spaces > 0)
		{
			_putchar(' ');
			spaces--;
		}
		while (count > 0)
		{
			_putchar('#');
			count--;
		}
		if (size >= 1)
		{
			_putchar('\n');
		}
		i++;
		size--;
	}
	if (size < 1)
	{
		_putchar('\n');
	}
}
