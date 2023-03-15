#include <stdio.h>

/**
 * main - prints numbers
 *
 *
 * Return: 0 if successful
 */
int main(void)
{
	int i, j, multiplier;

	for (i = 0; i < 100; i++)
	{
		for (j = i + 1; j < 100; j++)
		{
			if (!(i == 0 && j == 1))
			{
				putchar(',');
				putchar(' ');
			}
			if (i < 10)
				putchar('0');
			if (i > 9)
				multiplier = 10;
			else
				multiplier = 1;
			while (multiplier > 0)
			{
				putchar(((i / multiplier) % 10) + '0');
				multiplier /= 10;
			}
			putchar(' ');
			if (j < 10)
				putchar('0');
			if (j > 9)
				multiplier = 10;
			else
				multiplier = 1;
			while (multiplier > 0)
			{
				putchar(((j / multiplier) % 10) + '0');
				multiplier /= 10;
			}
		}
	}
	putchar('\n');
	return (0);
}
