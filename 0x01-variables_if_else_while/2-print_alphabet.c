#include <stdio.h>

/**
 * main - prints alphabets
 *
 * Description: This function prints the
 * alphabets in lowercase followed by a
 * newline
 * Return: 0
 */
int main(void)
{
	char alphabets = 'a';

	while (alphabets <= 'z')
	{
		putchar(alphabets);
		alphabets++;
	}
	putchar('\n');
	return (0);
}
