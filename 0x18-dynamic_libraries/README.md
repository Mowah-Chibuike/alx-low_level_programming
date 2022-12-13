0x18. C - Dynamic libraries

Learning Objectives
- General
	- What is a dynamic library, how does it work, how to create one, and how to use it
	- What is the environment variable $LD_LIBRARY_PATH and how to use it
	- What are the differences between static and shared libraries
	- Basic usage nm, ldd, ldconfig

Requirements
- C
	- Allowed editors: vi, vim, emacs.
	- Ubuntu 20.04 LTS.
	- Betty style of coding and documentation.
	- The use of global variables is not allowed.
	- No more than 5 functions per file.
	- The use the standard library is forbidden.

- Bash
	- Allowed editors: vi, vim, emacs
	- Ubuntu 20.04 LTS.
	- The first line of all your files should be exactly #!/bin/bash.
	- All your files must be executable.

Tasks
- Mandatory
	- libdynamic.so: Create the dynamic library libdynamic.so
	- 1-create_dynamic_lib.sh: script that creates a dynamic library called liball.so from all the .c files that are in the current directory.
