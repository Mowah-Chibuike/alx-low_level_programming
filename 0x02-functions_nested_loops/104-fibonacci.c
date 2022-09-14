#include <stdio.h>

/**
 * main - prints the first 98 numbers in a fibonacci
 * sequence that starts with 1 & 2
 *
 *
 * Return: 0 if successful
 */
int main(void)
{
	long int i = 1, j = 2;
	int count = 2;

	printf("1, 2, ");
	while (count <= 96)
	{
		i = i + j;
		j = j + i;
		printf("%lu, %lu", i, j);
		if (count != 96)
		{
			printf(", ");
		}
		count += 2;
	}
	printf("\n");
	return (0);
}
