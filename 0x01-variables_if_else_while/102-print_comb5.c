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
	int l;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			for (k = 0; k <= 9; k++)
			{
				for (l = j + 1; l <= 9; l++)
				{
					putchar(i + '0');
					putchar(j + '0');
					putchar(' ');
					putchar(k + '0');
					putchar(l + '0');
					if ((i == 9)
					&& (j == 8)
					&& (k == 9)
					&& (l == 9))
					{
						putchar('\n');
					}
					else
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
			if ((i == 9) && (j == 8))
			{
				j += 1;
			}
		}
	}
	return (0);
}
