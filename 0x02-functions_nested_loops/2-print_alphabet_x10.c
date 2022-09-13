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

	while (count <= 9)
	{
		int alphabet = 'a';

		while (alphabet <= 'z')
		{
			_putchar(alphabet);
			alphabet++;
		}
	}
	_putchar('\n');
}
