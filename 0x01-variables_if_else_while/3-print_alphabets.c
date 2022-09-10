#include <stdio.h>

/**
 * main - prints the alphabets
 *
 * Description: This function prints
 * all the alphabets in lowercase and
 * then in uppercase
 * Return: 0
 */
int main(void)
{
	char alphabets;

	for (alphabets = 'a'; alphabets <= 'z'; alphabets++)
	{
		putchar(alphabets);
	}
	for (alphabets = 'A'; alphabets <= 'Z'; alphabets++)
	{
		putchar(alphabets);
	}
	putchar('\n');
	return (0);
}
