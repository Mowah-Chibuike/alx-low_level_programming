#include <stdio.h>
#include <stdint.h>

/**
 * main - finds and prints the largest prime factor of the number 612852475143
 * followed by a new line.
 *
 * Return: always 1
 */
int main(void)
{
	int_fast64_t num = 612852475143;
	int max_prime, odd_number;

	while (num % 2 == 0)
	{
		max_prime = 2;
		num /= 2;
	}
	odd_number = 3;
	while (num != 1)
	{
		while ((num % odd_number) == 0)
		{
			max_prime = odd_number;
			num /= odd_number;
		}
		odd_number += 2;
	}
	printf("%d\n", max_prime);
	return (0);
}
