#include "main.h"

/**
 * print_number - a function that prints an integer.
 * @n: the number to be printed
 */
void print_number(int n)
{
	int digit, num = n, multiplier = 1, flag = 0;

	if (num < 0)
	{
		_putchar('-');
		num += 1;
		flag = 1;
		num *= -1;
		n += 1;
		n *= -1;
	}
	while (num > 9)
	{
		multiplier *= 10;
		num /= 10;
	}
	while (multiplier > 0)
	{
		digit = (n / multiplier) % 10;
		if (flag && multiplier == 1)
			digit += 1;
		_putchar(digit + '0');
		multiplier /= 10;
	}
}
