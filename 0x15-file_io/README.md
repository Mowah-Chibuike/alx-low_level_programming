0x15. C - File I/O

Learning Objectives
- General
	- Look for the right source of information online
	- How to create, open, close, read and write files
	- What are file descriptors
	- What are the 3 standard file descriptors, what are their purpose and what are their POSIX names
	- How to use the I/O system calls open, close, read and write
	- What are and how to use the flags O_RDONLY, O_WRONLY, O_RDWR
	- What are file permissions, and how to set them when creating a file with the open system call
	- What is a system call
	- What is the difference between a function and a system call

Requirements
- General
	- Ubuntu 20.04 LTS.
	- Betty style of coding and documentation.
	- The use of global variables is not allowed.
	- No more than 5 functions per file.
	- The only C standard library functions allowed are malloc, free and exit.
	- Allowed syscalls: read, write, open, close
	- All header files should be include guarded.
	- Tip: always prefer using symbolic constants (POSIX) vs numbers when it makes sense. For instance read(STDIN_FILENO, ... vs read(0, ...

Tasks
- Mandatory
	- 0-read_textfile.c: reads a text file and prints it to the POSIX standard output.
	- 1-create_file.c: creates a file.
	- 2-append_text_to_file.c: appends text at the end of a file.




- Advanced
