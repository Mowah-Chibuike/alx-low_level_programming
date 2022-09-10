#include <stdio.h>

/**
 * main - prints numbers
 *
 * Description: prints decimal numbers
 * less than 10
 * Return: 0
 */
int main(void)
{
	int number = 0;

	while (number < 10)
	{
		putchar(number % 10 + '0');
		number++;
	}
	putchar('\n');
	return (0);
}
