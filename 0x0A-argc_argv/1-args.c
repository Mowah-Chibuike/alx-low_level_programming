#include "main.h"

/**
 * main - program that prints the number of arguments passed into it.
 * @argc: number of arguments passed to the function
 * @argv: arguments passed to the function
 *
 * Return: 0 if successful
 */

int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
