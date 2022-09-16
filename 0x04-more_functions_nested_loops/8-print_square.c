#include "main.h"

/**
 * print_square - prints a square, followed by a new line
 * @size: size of the square
 *
 *
 * Return: void
 */

void print_square(int size)
{
	int i = 0;

	while (size > 0)
	{
		int length = size + i;

		while (length > 0)
		{
			_putchar('#');
			length--;
		}
		if (size > 1)
		{
			_putchar('\n');
		}
		i++;
		size--;
	}
	if (size <= 0)
	{
		_putchar('\n');
	}
}
