0x0B. C - malloc, free

General
- What is the difference between automatic and dynamic allocation
- What is malloc and free and how to use them
- Why and when use malloc
- How to use valgrind to check for memory leak

Requirements
- General
	-  Ubuntu 20.04 LTS 
	- Betty style of coding and documentation
	- Use of global variables are not allowed
	- No more than 5 functions per file
	- The only C standard library functions allowed are malloc and free. Any use of functions like printf, puts, calloc, realloc etc… is forbidden

Tasks
- Mandatory
	- 0-create_array.c: program creates an array of chars, and initializes it with a specific char.
	- 1-strdup.c: program returns a pointer to a newly allocated space in memory, which contains a copy of the string given as a parameter.
	- 2-str_concat.c: program concatenates two strings.
	- 3-alloc_grid.c: program returns a pointer to a 2 dimensional array of integers.
	- 4-free_grid.c: frees a 2 dimensional grid previously created by the alloc_grid function.

-Advanced
	- 100-argstostr.c - program concatenates all the arguments passed to it.
	- 101-strtow.c: program splits a string into words.
