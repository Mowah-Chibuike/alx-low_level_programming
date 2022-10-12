#include "main.h"

/**
 * name - name to be printed
 * @f: pointer to function that defines the format with which the name will be
 * printed
 *
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
