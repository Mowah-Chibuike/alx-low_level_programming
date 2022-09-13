#include "main.h"

/**
 * print_sign - prints sign of a number
 * @n: number to be checked
 *
 * Return: 1 if positive, 0 if 0 and -1 if
 * number is negative
 */
int print_sign(int n)
{
	if (n > 1)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
