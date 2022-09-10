#include <stdio.h>
#include <string.h>

/**
 * main - prints the reverse of a string
 *
 * Description: prints the alpabets in
 * lowercase in reverse order
 * Return: 0
 */
int main(void)
{
	char alphabet = 'z';

	while (alphabet >= 'a')
	{
		putchar(alphabet);
		alphabet--;
	}
	putchar('\n');
	return (0);
}
