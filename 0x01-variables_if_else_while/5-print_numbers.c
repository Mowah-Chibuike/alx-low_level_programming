#include <stdio.h>

/**
 * main - prints numbers
 *
 * Description: This function prints
 * decimal numbers less than 10
 * Return: 0
 */
int main(void)
{
	int number = 0;

	while (number < 10)
	{
		printf("%d", number);
		number++;
	}
	printf("\n");
	return (0);
}
