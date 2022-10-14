#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
/**
 * struct fmt - Struct fmt
 *
 * @op: The printing format
 * @f: The function associated
 */
typedef struct fmt
{
	char *fm;
	void (*f)(va_list valist);
} fmt_t;
void print_all(const char * const format, ...);

#endif /* VARIADIC_FUNCTIONS_H */
