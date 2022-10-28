#include "main.h"
#include <stdio.h>

/**
 * print_binary - prints the binary representation of a number.
 * @n: decimal number to be printed in binary notation
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	signed long int size;
	int flag = 0;
	char num;

	if (n == 1 || n == 0)
	{
		_putchar(n + '0');
		return;
	}
	size = sizeof(n) * 8 - 1;
	while (size >= 0)
	{
		num = (n >> size) & 1;
		if (flag == 1)
			_putchar(num + '0');
		else
		{
			if (num != 0)
			{
				_putchar(num + '0');
				flag = 1;
			}
		}
		size--;
	}
}
