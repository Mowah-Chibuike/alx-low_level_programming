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
	int n = 48;
	int x = 49;
	int j = 0, i = 0, b = 8;

	while (i <= b && b != -1)
	{
		while (j <= b)
		{
			putchar(n);
			putchar(x);
			if (n != 56 || x != 57)
			{
				putchar(',');
				putchar(' ');
			}
			x++;
			j++;
		}
		n++;
		x = x - b;
		b--;
	}
	putchar('\n');
	return (0);
}
