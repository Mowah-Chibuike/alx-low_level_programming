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
	int count = 2;

	printf("1, 2, ");
	while (count <= 50)
	{
		i = i + j;
		j = i + j;
		printf("%lu, %lu", i, j);
		if (count != 50)
		{
			printf(", ");
		}
		count += 2;
	}
	printf("\n");
	return (0);
}
