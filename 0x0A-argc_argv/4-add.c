#include "main.h"
#include <stdlib.h>

/**
 * main - adds positive numbers
 * @argc: number of arguments
 * @argv: argumets passed to the function
 *
 * Return: 0 if successful, 1 otherwise
 */

int main(int argc, char *argv[])
{
	int i, x, result = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		x = atoi(argv[i]);
		if (!x)
		{
			printf("Error\n");
			return (1);
		}
		result += x;
	}

	printf("%d\n", result);
	return (0);
}
