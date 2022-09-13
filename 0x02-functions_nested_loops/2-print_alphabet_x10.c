#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabets
 *
 * Description: This function prints the
 * lowercase letters of the alphabet 10
 * times
 */
void print_alphabet_x10(void)
{
	int count = 0;

	while (count < 10)
	{
		print_alphabet();
		count++;
	}
	_putchar('\n');
}
