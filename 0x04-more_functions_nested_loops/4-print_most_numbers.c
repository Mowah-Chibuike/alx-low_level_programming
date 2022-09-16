#include "main.h"

/**
 * print_most_numbers - prints single digiit numbers except 2 and 4
 *
 *
 * Return: void
 */

void print_most_numbers(void)
{
	int i = 0;

	while (i <= 9)
	{
		_putchar(i + '0');
		if ((i == 1) || (i == 3))
		{
			i += 2;
		}
		else
		{
			i++;
		}
	}
	_putchar('\n');
}
