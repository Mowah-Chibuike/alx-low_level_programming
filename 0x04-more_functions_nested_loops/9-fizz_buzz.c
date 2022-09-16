#include <stdio.h>

/**
 * main - prints the numbers from 1 to 100, followed by a new line
 *
 * Description: if the number is a multiple of 3, print Fizz instead
 * if the number is a multiple of 5, print Buzz instead. If the number
 * is a multiple of both 3 and 5 print Fizz Buzz instead
 * Return: 0 if successful
 */

int main(void)
{
	int i = 1;

	while (i <= 100)
	{
		if (((i % 3) == 0) && ((i % 5) == 0))
		{
			printf("Fizz Buzz");
		}
		else if ((i % 3) == 0)
		{
			printf("Fizz");
		}
		else if ((i % 5) == 0 )
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", i);
		}
		if (i < 100)
		{
			printf(" ");
		}
		i++;
	}
	printf("\n");
	return (0);
}
