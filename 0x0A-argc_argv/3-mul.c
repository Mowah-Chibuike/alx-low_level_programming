#include "main.h"
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: number of arguments passed to the function
 * @argv: arguments passed to the function
 *
 * Return: 0 if successful
 */

int main(int argc, char *argv[])
{
	int i, x, result = 1;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}

	for (i = 1; i < argc; i++)
	{
		x = atoi(argv[i]);
		if (!x)
		{
			printf("Error\n");
			return (1);
		}
		result *= x;
	}

	printf("%d\n", result);
	return (0);
}
