#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

long int largest_number(long int a, long int b, long int c)
{
	 long int largest;

	 if ((a > b) && (a > c))
	 {
	 	largest = a;
	 }
	 if ((b > a) && (b > c))
	 {
	 	largest = b;
	 }
	 if ((c > a) && (c > b))
	 {
	 	largest = c;
	 }

	 return (largest);
}
