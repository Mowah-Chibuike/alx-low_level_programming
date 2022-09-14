#include "main.h"

/**
 * print_times_table - prints the n times table starting with 0
 * @n: the last times_table
 *
 * Return: nothing
 */
void print_times_table(int n)
{
	int i = 0,  count = 0, res, iterations;

	if ((n >= 0) && (n <= 15))
	{
		while (count <= n)
		{
			iterations = 0;
			while (iterations <= n)
			{
				res = ((i * count) + (count * iterations));
				if (res > 9)
				{
					_putchar(((res / 10) % 10) + '0');
					_putchar((res % 10) + '0');
					if (res > 99)
						_putchar(((res % 10) % 10) + '0');
				}
				else
				{
					if (iterations > 0)
						_putchar(' ');
					_putchar(res + '0');
				}
				if (iterations < n)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
				iterations++;
			}
			_putchar('\n');
			count++;
		}
	}
}
