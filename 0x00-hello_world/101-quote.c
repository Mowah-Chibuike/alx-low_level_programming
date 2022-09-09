#include <stdio.h>
#include <stdlib.h>
/**
 * main -prints an error message
 *
 * Description: main prints out an error mmeesage to the stderr
 *
 * Return : returns 1 because it fails
 */

int main(void)
{
	fwrite("and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 39, 1, stderr);
        exit(EXIT_FAILURE);
	return (1);
}
