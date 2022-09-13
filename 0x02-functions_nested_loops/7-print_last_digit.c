#include "main.h"

/**
 * print_last_digit - prints the last digit of
 * a number
 * @n: the number to be checked
 *
 * Return: the last digit of n
 */
int print_last_digit(int n)
{
	int res;
	int v;

	res = n % 10;
	if (res < 0)
	{
		v = (res * -1) + '0';
	}
	else
	{
		v = res + '0';
	}
	_putchar(v);
	return (v - '0');
}
