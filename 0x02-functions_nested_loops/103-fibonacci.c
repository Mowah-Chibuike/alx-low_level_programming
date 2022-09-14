#include <stdio.h>

/**
 * main - prints the sum of the even numbers in the Fibonacci
 * sequence
 *
 *
 * Return: 0 if successful
 */
int main(void)
{
	long int i = 1, j = 2, res = 0;

	while ((i < 4000000) || (j < 4000000))
	{
		if ((i % 2) == 0)
		{
			res += i;
		}
		i = i + j;
		if ((j % 2) == 0)
		{
			res += j;
		}
		j = i + j;
	}
	printf("%lu\n", res);
	return (0);
}
