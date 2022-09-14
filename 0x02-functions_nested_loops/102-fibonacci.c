#include <stdio.h>

/**
 * main - prints the first Fibonacci numbers
 *
 *
 * Return: 0 if successful
 */
int main(void)
{
	long int i = 1, j = 2;
	int count;

	printf("1, 2, ");
	count = 2;
	while (count <= 48)
	{
		i = i + j;
		j = i + j;
		printf("%lu, %lu", i, j);
		if (count != 48)
		{
			printf(", ");
		}
		count += 2;
	}
	printf("\n");
	return (0);
}
