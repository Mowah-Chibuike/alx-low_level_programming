#include <stdio.h>

/**
 * main - prints numbers
 *
 * Description: The numbers are possible
 * combinations of single-digit numbers
 * Return: 0
 */
int main(void)
{
	int i, j;

	i = j = 0;
	for (i = 0; i < 10; i++)
	{
		for (j = i + 1; j < 10; j++)
		{
			if (!(i == 0 && j == 1))
			{
				putchar(',');
				putchar(' ');
			}
			putchar(i + '0');
			putchar(j + '0');
		}
	}
	putchar('\n');
	return (0);
}
