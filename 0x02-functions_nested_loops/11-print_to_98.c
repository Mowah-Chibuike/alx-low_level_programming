#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints natural numbers from n to
 * 98
 * @n - the first printed number
 *
 * Return: nothing
 */
void print_to_98(int n)
{
	while (n >= 98)
	{
		if (n != 98)
		{
			printf("%d, ", n);
		}
		else
		{
			printf("%d", n);
		}
		n--;
	}
	while (n <= 98)
	{
		if (n != 98)
		{
			printf("%d, ", n);
		}
		else
		{
			printf("%d", n);
		}
		n++;
	}
	_putchar('\n');
}

