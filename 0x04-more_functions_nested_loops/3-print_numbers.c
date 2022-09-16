#include "main.h"

/**
 * prints_numbers - prints single digit numbers followed by a new line
 *
 *
 * Return: void
 */

void print_numbers(void)
{
	int i;

	i = 0;
	while (i <= 9)
	{
		_putchar(i + '0');
	}
	_putchar('\n');
}
