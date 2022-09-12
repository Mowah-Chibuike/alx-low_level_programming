#include <stdio.h>

/**
 * main - prints combination of numbers
 *
 *
 * Return: 0
 */
int main(void)
{
	char i = '0', j = '0', k = '0';
	int a = 8;

	for (;i <= '9'; i++)
	{
		for (; j < '7'; j++)
		{
			for (; k < '3'; k++)
			{
				putchar(',');
				putchar(' ');
				putchar(i
