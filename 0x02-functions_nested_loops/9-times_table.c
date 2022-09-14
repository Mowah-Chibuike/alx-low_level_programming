#include "main.h"

/**
 * times_table - prints the 9 times table
 *
 *
 * Return: The 9 times table
 */
void times_table(void)
{
	int i = 0;
	int count = 0;
	int res;

	while (count <= 9)
	{
		int iterations = 0;

		while (iterations <= 9)
		{
			res = (i * count) + (count * iterations);
			if (res > 9)
			{
				_putchar((res / 10) + '0');
				_putchar((res % 10) + '0');
			}
			else
			{
				if (iterations > 0)
				{
					_putchar(' ');
				}
				_putchar(res + '0');
			}
			_putchar(',');
			_putchar(' ');
			iterations++;
		}
		_putchar('\n');
		count++;
	}
}
