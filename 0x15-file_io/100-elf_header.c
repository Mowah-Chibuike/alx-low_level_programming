#include "main.h"
#include <elf.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <errno.h>

/**
 * check_file_type - checks if a file is an ELF
 * @struct_ptr: pointer to elf header
 * @flag: 1 if the system is 64bit and 0 if the system is 32 bit
 *
 * Return: void
 */
void check_file_type(void *struct_ptr, int flag)
{
	char *err;
	unsigned char *mgc;
	Elf32_Ehdr *struct1;
	Elf64_Ehdr *struct2;

	err = "Error: Not an ELF file - it has the wrong magic bytes at the start";
	if (!flag)
	{
		struct1 = (Elf32_Ehdr *)struct_ptr;
		mgc = struct1->e_ident;
	}
	else
	{
		struct2 = (Elf64_Ehdr *)struct_ptr;
		mgc = struct2->e_ident;
	}
	if (mgc[0] != 0x7f && mgc[1] != 0x45 && mgc[2] != 0x4c && mgc[3] != 0x45)
	{
		dprintf(2, "%s\n", err);
		free(struct_ptr);
		exit(98);
	}
}

/**
 * read_file - reads a file
 * @fd: file descriptor of the file
 * @flag: 1 if system is 64 bit or 0 if system is 32 bit
 *
 * Return: part of the file read
 */
void *read_file(int fd, int flag)
{
	int ret;
	void *struct_ptr;

	if (!flag)
		struct_ptr = (Elf32_Ehdr *)malloc(sizeof(Elf32_Ehdr));
	else
		struct_ptr = (Elf64_Ehdr *)malloc(sizeof(Elf64_Ehdr));
	if (struct_ptr == NULL)
	{
		dprintf(STDERR_FILENO, "Error: %s\n", strerror(errno));
		exit(98);
	}
	if (flag)
		ret = read(fd, struct_ptr, sizeof(Elf64_Ehdr));
	else
		ret = read(fd, struct_ptr, sizeof(Elf32_Ehdr));
	if (ret < 0)
	{
		perror("Error");
		free(struct_ptr);
		close(fd);
		exit(98);
	}
	return (struct_ptr);
}

/**
 * print_magic - print the magic numbers of a file
 * @struct_ptr: pointer to elf header
 * @flag: 1 if system is 64 bit or 0 if system is 32 bit
 */
void print_magic(void *struct_ptr, int flag)
{
	int i;
	unsigned char *mgc;
	Elf32_Ehdr *struct1;
	Elf64_Ehdr *struct2;
	
	if (!flag)
	{
		struct1 = (Elf32_Ehdr *)struct_ptr;
		mgc = struct1->e_ident;
	}
	else
	{
		struct2 = (Elf64_Ehdr *)struct_ptr;
		mgc = struct2->e_ident;
	}
	printf("  Magic:   ");
	for (i = 0; i < 16; i++)
	{
		printf("%.2x", mgc[i]);
		if (i < 15)
			printf(" ");
	}
	printf("\n");
}

/**
 * print_class - prints the archhitecture of binary file
 * @struct_ptr: pointer to the file header
 * @flag: 1 if system is 64 bit or 0 if system is 32 bit
 */
void print_class(void *struct_ptr, int flag)
{
	int i;
	unsigned char *mgc;
	Elf32_Ehdr *struct1;
	Elf64_Ehdr *struct2;
	macro_t macro_list[] = {
		{ELFCLASSNONE, "ELFNONE"},
		{ELFCLASS32, "ELF32"},
		{ELFCLASS64, "ELF64"},
		{-1, NULL}
	};

	if (!flag)
	{
		struct1 = (Elf32_Ehdr *)struct_ptr;
		mgc = struct1->e_ident;
	}
	else
	{
		struct2 = (Elf64_Ehdr *)struct_ptr;
		mgc = struct2->e_ident;
	}
	printf("  Class:                             ");
	i = 0;
	while (macro_list[i].number >= 0)
	{
		if (mgc[4] == macro_list[i].number)
		{
			printf("%s\n", macro_list[i].string);
			break;
		}
		i++;
	}
}

/**
 * print_data - prints the data encoding of processor-specific data in the
 * file
 * @struct_ptr: pointer to the file header
 * @flag: 1 if system is 64 bit or 0 if the system is 32 bit
 *
 * Return: void
 */
void print_data(void *struct_ptr, int flag)
{
	int i;
	unsigned char *mgc;
	Elf32_Ehdr *struct1;
	Elf64_Ehdr *struct2;
	macro_t macro_list[] = {
		{ELFDATANONE, "Unknown data format"},
		{ELFDATA2LSB, "2's complement, little endian"},
		{ELFDATA2MSB, "2's complement, big endian"},
		{-1, NULL}
	};

	if (!flag)
	{
		struct1 = (Elf32_Ehdr *)struct_ptr;
		mgc = struct1->e_ident;
	}
	else
	{
		struct2 = (Elf64_Ehdr *)struct_ptr;
		mgc = struct2->e_ident;
	}
	printf("  Data:                              ");
	i = 0;
	while (macro_list[i].number >= 0)
	{
		if (mgc[5] == macro_list[i].number)
		{
			printf("%s\n", macro_list[i].string);
			break;
		}
		i++;
	}
}

/**
 * print_version - prints version number of ELF specification
 * @struct_ptr: pointer to the file header
 * @flag: 1 if system is 64 bit or 0 if system is 32 bit
 *
 * Return: void
 */
void print_version(void *struct_ptr, int flag)
{
	int i, number;
	unsigned char *mgc;
	Elf32_Ehdr *struct1;
	Elf64_Ehdr *struct2;
	macro_t macro_list[] = {
		{EV_NONE, "(invalid)"},
		{EV_CURRENT, "(current)"},
		{-1, NULL}
	};

	if (!flag)
	{
		struct1 = (Elf32_Ehdr *)struct_ptr;
		mgc = struct1->e_ident;
	}
	else
	{
		struct2 = (Elf64_Ehdr *)struct_ptr;
		mgc = struct2->e_ident;
	}
	printf("  Version:                           ");
	i = 0;
	while (macro_list[i].number >= 0)
	{
		if (mgc[6] == macro_list[i].number)
		{
			number = macro_list[i].number;
			printf("%d %s\n", number, macro_list[i].string);
			break;
		}
		i++;
	}
}

/**
 * print_os_abi - prints the operating system and ABI to which the object is
 * targeted
 * @struct_ptr: pointer to the file header
 * @flag: 1 if the system is 64 bit or 0 if the system is 32 bit
 *
 * Return: void
 */
void print_os_abi(void *struct_ptr, int flag)
{
	int i;
	unsigned char *mgc;
	Elf32_Ehdr *struct1;
	Elf64_Ehdr *struct2;
	macro_t macro_list[] = {
		{ELFOSABI_NONE, "UNIX - System V"},
		{ELFOSABI_SYSV, "UNIX - System V"},
		{ELFOSABI_HPUX, "UNIX - HP-UX"},
		{ELFOSABI_NETBSD, "UNIX - NetBSD"},
		{ELFOSABI_LINUX, "UNIX - Linux"},
		{ELFOSABI_SOLARIS, "UNIX - Solaris"},
		{ELFOSABI_IRIX, "UNIX - IRIX"},
		{ELFOSABI_FREEBSD, "UNIX - FreeBSD"},
		{ELFOSABI_TRU64, "UNIX - TRU64"},
		{ELFOSABI_ARM, "ARM architecture"},
		{ELFOSABI_STANDALONE, "Stand-alone (embedded)"},
		{-1, NULL}
	};

	if (!flag)
	{
		struct1 = (Elf32_Ehdr *)struct_ptr;
		mgc = struct1->e_ident;
	}
	else
	{
		struct2 = (Elf64_Ehdr *)struct_ptr;
		mgc = struct2->e_ident;
	}
	printf("  OS/ABI:                            ");
	i = 0;
	while (macro_list[i].number >= 0)
	{
		if (mgc[7] == macro_list[i].number)
		{
			printf("%s\n", macro_list[i].string);
			break;
		}
		i++;
	}
}

/**
 * print_abi_v - prints the version of the ABI to which the object is targeted
 * @struct_ptr: ponter to the file header
 * @flag: 1 if the system is 64 bit and 0 if the system is 32 bit
 *
 * Return: void
 */
void print_abi_v(void *struct_ptr, int flag)
{
	unsigned char *mgc;
	Elf32_Ehdr *struct1;
	Elf64_Ehdr *struct2;

	if (!flag)
	{
		struct1 = (Elf32_Ehdr *)struct_ptr;
		mgc = struct1->e_ident;
	}
	else
	{
		struct2 = (Elf64_Ehdr *)struct_ptr;
		mgc = struct2->e_ident;
	}
	printf("  ABI Version:                       %d\n", mgc[8]);
}

/**
 * print_type - prints the object file type
 * @struct_ptr: pointer to the file header
 * @flag: 1 if the system is 64 bit and 0 if the system is 32 bit
 *
 * Return: void
 */
void print_type(void *struct_ptr, int flag)
{
	int i;
	Elf32_Ehdr *struct1;
	Elf64_Ehdr *struct2;
	uint16_t type;
	macro_t macro_list[] = {
		{ET_NONE, "NONE (Unknown type)"},
		{ET_REL, "REL (Relocatable file)"},
		{ET_EXEC, "EXEC (Executable file)"},
		{ET_DYN, "DYN (Shared object file)"},
		{ET_CORE, "CORE (Core file"},
		{-1, NULL}
	};

	if (!flag)
	{
		struct1 = (Elf32_Ehdr *)struct_ptr;
		type = struct1->e_type;
	}
	else
	{
		struct2 = (Elf64_Ehdr *)struct_ptr;
		type = struct2->e_type;
	}
	printf("  Type:                              ");
	i = 0;
	while (macro_list[i].number >= 0)
	{
		if (type == macro_list[i].number)
		{
			printf("%s\n", macro_list[i].string);
			break;
		}
		i++;
	}
}

/**
 * print_entry_point - prints the virtual address to which the system first
 * transfers control, thus starting the process.
 * @struct_ptr: pointer to the file header.
 * @flag: 1 if the system is 64 bit and 0 if the system is 32 bit.
 *
 * Return: void
 */
void print_entry_point(void *struct_ptr, int flag)
{
	Elf32_Ehdr *struct1;
	Elf64_Ehdr *struct2;
	unsigned long int address;

	if (!flag)
	{
		struct1 = (Elf32_Ehdr *)struct_ptr;
		address = (uint32_t)struct1->e_entry;
	}
	else
	{
		struct2 = (Elf64_Ehdr *)struct_ptr;
		address = (uint64_t)struct2->e_entry;
	}
	printf("  Entry point address:               0x%lx\n", address);
}

/**
 * print_file_header - prints file header
 * @struct_ptr: pointer to the file header
 * @flag: 1 if system is 64 bit or 0 if system is 32 bit
 *
 * Return: void
 */
void print_file_header(void *struct_ptr, int flag)
{
	int i;
	void (*func)(void *, int);
	func_call_t call_list[] = {
		{0, print_magic},
		{1, print_class},
		{2, print_data},
		{3, print_version},
		{4, print_os_abi},
		{5, print_abi_v},
		{6, print_type},
		{7, print_entry_point},
		{-1, NULL}
	};

	i = 0;
	while (call_list[i].index >= 0)
	{
		func = call_list[i].func;
		func(struct_ptr, flag);
		i++;
	}
}

/**
 * main - displays the information contained in the ELF header at the start of
 * an ELF file.
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int fd, ret, flag = 0;
	void *struct_ptr;

	if (argc != 2)
	{
		write(STDERR_FILENO, "Usage: elf_header elf_filename\n", 31);
		exit(98);
	}
	if ((sizeof(void *) * 8) == 64)
		flag = 1;
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		perror("Error");
		exit(98);
	}
	ret = lseek(fd, 0, SEEK_SET);
	if (ret < 0)
	{
		perror("Error");
		exit(98);
	}
	struct_ptr = read_file(fd, flag);
	check_file_type(struct_ptr, flag);
	printf("ELF Header:\n");
	print_file_header(struct_ptr, flag);
	close(fd);
	return (0);
}
