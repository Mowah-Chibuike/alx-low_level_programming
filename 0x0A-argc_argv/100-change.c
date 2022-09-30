#include "main.h"
#include <stdlib.h>

/**
 * main - prints the minimum number of coins to make change for an amount of money.
 * @argc: number od=f arguments passed to function
 * @argv: arguments passed to the function
 *
 * Return: 0 if successful, 1 otherwise
 */

int main(int argc, char *argv[])
{
	int i, j, n = 0, t;
	int c[5] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	j = atoi(argv[1]);
	if (j < 1)
	{
		printf("%d\n", n);
		return (0);
	}

	for (i = 0; i < 5; i++)
	{
		t = j / c[i];
		j -= t * c[i];
		n += t;
		if (j == 0)
		{
			break;
		}
	}

	printf("%d\n", n);
	return (0);
}
