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

	while (n < 10)
	{
		putchar(n + '0');
		if (n == 9)
		{
			putchar('\n');
		}
		else
		{
			putchar(',');
			putchar(' ');
		}
		n++;
	}
	return (0);
}
