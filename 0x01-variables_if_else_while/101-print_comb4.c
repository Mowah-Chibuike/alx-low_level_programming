#include <stdio.h>

/**
 * main - prints numbers
 *
 *
 * Return: 0 if successful
 */
int main(void)
{
	int i;
	int j;
	int k;

	for (i = 0; i < 10; i++)
	{
		for (j = i + 1; j < 10; j++)
		{
			for (k = j + 1; k < 10; k++)
			{
				if (!(i == 0 && j == 1 && k == 2))
				{
					putchar(',');
					putchar(' ');
				}
				putchar(i + '0');
				putchar(j + '0');
				putchar(k + '0');
			}
		}
	}
	putchar('\n');
	return (0);
}
