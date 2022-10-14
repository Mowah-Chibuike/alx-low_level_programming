#include "variadic_functions.h"
#include <string.h>
#include <stdio.h>

/**
 * print_char - prints character
 * @valist: va_list object
 *
 * Return: void
 */
void print_char(va_list valist)
{
	char c = va_arg(valist, int);

	printf("%c", c);
}

/**
 * print_int - prints integer
 * @valist: va_list object
 *
 * Return: void
 */
void print_int(va_list valist)
{
	int n = va_arg(valist, int);

	printf("%d", n);
}

/**
 * print_float - prints float value
 * @valist: va_list object
 *
 * Return: void
 */
void print_float(va_list valist)
{
	printf("%f", va_arg(valist, double));
}

/**
 * print_string - prints a string
 * @valist: holding va_list object
 *
 * Return: void
 */
void print_string(va_list valist)
{
	char *str;

	str = va_arg(valist, char*);
	if (str)
	{
		printf("%s", str);
		return;
	}
	printf("(nil)");
}

/**
 * print_all - prints anything
 * @format: list of types of arguments passedto the function
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	int i, j;
	char *separator = "", *specifier;
	void (*func)(va_list);
	va_list args;
	fmt_t f[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string},
		{NULL, NULL}
	};

	i = j = 0;
	va_start(args, format);
	while (format && format[i])
	{
		while (f[j].fm)
		{
			specifier = f[j].fm;
			if (*specifier == format[i])
			{
				printf("%s", separator);
				func = f[j].f;
				func(args);
				separator = ", ";
				break;
			}
			j++;
		}
		j = 0;
		i++;
	}
	va_end(args);
	printf("\n");
}
