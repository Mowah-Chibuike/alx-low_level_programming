#include "main.h"
#include <stdlib.h>
#include <ctype.h>

/**
 * main - adds positive numbers
 * @argc: number of arguments
 * @argv: argumets passed to the function
 *
 * Return: 0 if successful, 1 otherwise
 */

int main(int argc, char *argv[])
{
	int i, j, x, result = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if (isdigit(argv[i][j]) == 0)
			{
				printf("Error\n");
				return (1);
			}
		}
		x = atoi(argv[i]);
		result += x;
	}

	printf("%d\n", result);
	return (0);
}
