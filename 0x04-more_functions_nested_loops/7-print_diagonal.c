#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: length of the line
 *
 *
 * Return: void
 */

void print_diagonal(int n)
{
	int i = 0;

	while (n > 0)
	{
		int count = n - (n - i);

		while (count > 0)
		{
			_putchar(' ');
			count--;
		}
		_putchar('\\');
		_putchar('\n');
		i++;
		n--;
	}
}
