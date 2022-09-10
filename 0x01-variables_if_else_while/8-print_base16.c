#include <stdio.h>

/**
 * main - prints all hexidecimal numbers
 *
 *
 * Return: 0
 */
int main(void)
{
	int i = 48;

	while (i >= 48 && i <= 102)
	{
		putchar(i);
		if (i == 57)
		{
			i = 96;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
