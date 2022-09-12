#include <stdio.h>

/**
 * main - prints three-digit numbers
 *
 * Description: This function prints all
 * possible combinations of single-digit
 * numbers to make three-digit numbers
 * Return: 0 if successful
 */
int main(void)
{
	int i;
	int j;
	int k;

	for (i = 0; i <= 7; i++)
	{
		for (j = 1; j <= 8; j++)
		{
			for (k = j + 1; k <= 9; k++)
			{
				if ((i != j) && (i != k))
				{
					putchar(i + '0');
					putchar(j + '0');
					putchar(k + '0');
					if ((i == 7) && (j == 8) && (k == 9))
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
		}
	}
	return (0);
}
