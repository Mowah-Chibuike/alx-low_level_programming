#include <stdio.h>

/**
 * main - prints alphabets
 *
 * Description: prints all alphabets
 * in lowercase except from e and q
 * Return: 0
 */
int main(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		putchar(alphabet);
		if (alphabet == 'd' || alphabet == 'p')
		{
			alphabet += 2;
		}
		else
		{
			alphabet++;
		}
	}
	putchar('\n');
	return (0);
}
