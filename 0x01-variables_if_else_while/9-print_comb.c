#include <stdio.h>

/**
 * main - prints numbers
 *
 * Description: prints all possible
 * combinations of single digit numbers
 * Return: 1 if successful
 */
int main(void)
{
	int n = 0;

	while (n < 100)
	{
		putchar((n / 10) + '0');
		putchar((n % 10) + '0');
		if (n == 99)
		{
			putchar('\n');
		}
		else
		{
			putchar(',');
		}
		n++;
	}
	return (1);
}
