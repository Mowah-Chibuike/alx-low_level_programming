#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stddef.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
/**
 * struct func_call - struct func
 * @index: index of the function
 * @func: function to be called
 *
 * Description: stores function pointers
 */
typedef struct func_call
{
	int index;
	void (*func)(void *, int);
} func_call_t;

/**
 * struct macros - struct macros
 * @number: number associated with macro
 * @string: static string associated with macro
 *
 * Description: prints a meaningful text associated with macro
 */
typedef struct macros
{
	int number;
	char *string;
} macro_t;

#endif /* MAIN_H */
