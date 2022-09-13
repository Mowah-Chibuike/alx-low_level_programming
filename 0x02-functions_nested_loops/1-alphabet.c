#include "main.h"

/**
 * print_alphabet - prints all alphabets
 *
 * Description: prints alphabets in
 * lowercase
 * Return: nothing
 */
void print_alphabet(void)
{
	int alphabet = 'a';

	while (alphabet <= 'z')
	{
		_putchar(alphabet);
		alphabet++;
	}
}
