#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <elf.h>

/**
 * print_magic - prints the magic number of an ELF header
 * @e_ident: the array of bytes on how to interpret the file
 */
void print_magic(unsigned char *e_ident)
{
	int i;

	printf(" Magic: ");

	for (i = 0; i < EI_NIDENT; i++)
	{
		if (i)
			printf(" ");

		printf("%02x", e_ident[i]);
	}

	printf("\n");
}

/**
 * print_class - prints the architecture of an ELF header
 * @e_ident: the array of bytes on how to interpret the file
 */
void print_class(unsigned char *e_ident)
{
	printf(" Class: ");

	switch (e_ident[EI_CLASS])
	{
	case ELFCLASSNONE:
		printf("none\n");
		break;
	case ELFCLASS32:
		printf("ELF32\n");
		break;
	case ELFCLASS64:
		printf("ELF64\n");
		break;
	default:
		printf("<unknown: %x>\n", e_ident[EI_CLASS]);
	}
}

/**
 * print_data - prints the magic number of an ELF header
 * @e_ident: the array of bytes on how to interpret the file
 */
void print_data(unsigned char *e_ident)
{
	printf(" Data: ");

	switch (e_ident[EI_DATA])
	{
	case ELFDATANONE:
		printf("none\n");
		break;
	case ELFDATA2LSB:
		printf("2's complement, little endian\n");
		break;
	case ELFDATA2MSB:
		printf("2's complement, big endian\n");
		break;
	default:
		printf("<unknown: %x>\n", e_ident[EI_DATA]);
	}
}

/**
 * print_version - prints the version number of an ELF header
 * @e_ident: the array of bytes on how to interpret the file
 */
void print_version(unsigned char *e_ident)
{
	printf(" Version: ");

	switch (e_ident[EI_VERSION])
	{
	case EV_CURRENT:
		printf("%d (current)\n", e_ident[EI_VERSION]);
		break;
	default:
		printf("%d\n", e_ident[EI_VERSION]);
	}
}

/**
 * print_osabi - prints the OS and ABI of an ELF header
 * @e_ident: the array of bytes on how to interpret the file
 */
void print_osabi(unsigned char *e_ident)
{
	printf(" OS/ABI: ");

	switch (e_ident[EI_OSABI])
	{
	case ELFOSABI_NONE:
		printf("UNIX - System V\n");
		break;
	case ELFOSABI_HPUX:
		printf("UNIX - HP-UX\n");
		break;
	case ELFOSABI_NETBSD:
		printf("UNIX - NetBSD\n");
		break;
	case ELFOSABI_LINUX:
		printf("UNIX - Linux\n");
		break;
	case ELFOSABI_SOLARIS:
		printf("UNIX - Solaris\n");
		break;
	case ELFOSABI_IRIX:
		printf("UNIX - IRIX\n");
		break;
	case ELFOSABI_FREEBSD:
		printf("UNIX - FreeBSD\n");
		break;
	case ELFOSABI_TRU64:
		printf("UNIX - TRU64\n");
		break;
	case ELFOSABI_ARM:
		printf("ARM\n");
		break;
	case ELFOSABI_STANDALONE:
		printf("Standalone App\n");
		break;
	default:
		printf("<unknown: %x>\n", e_ident[EI_OSABI]);
	}
}

/**
 * print_abi_version - prints the abi version of an ELF header
 * @e_ident: the array of bytes on how to interpret the file
 */
void print_abi_version(unsigned char *e_ident)
{
	printf(" ABI Verion: %d\n", e_ident[EI_ABIVERSION]);
}

/**
 * print_type - prints the magic number of an ELF header
 * @e_ident: the array of bytes on how to interpret the file
 * @e_type: the type of the file
 */
void print_type(unsigned char *e_ident, unsigned int e_type)
{
	printf(" Type: ");

	if (e_ident[EI_DATA] == ELFDATA2MSB)
		e_type >>= 8;

	switch (e_type)
	{
	case ET_NONE:
		printf("NONE (None)\n");
		break;
	case ET_REL:
		printf("REL (Relocatable file)\n");
		break;
	case ET_EXEC:
		printf("EXEC (Executable file)\n");
		break;
	case ET_DYN:
		printf("DYN (Shared object file)\n");
		break;
	case ET_CORE:
		printf("CORE (Core file)\n");
		break;
	default:
		printf("<unknown: %x>\n", e_type);
	}
}

/**
 * print_entry - prints the address if the entry point of an ELF header
 * @e_ident: the array of bytes on how to interpret the file
 * @e_entry: the address of the entry point
 */
void print_entry(unsigned char *e_ident, unsigned long int e_entry)
{
	printf(" Entry point address: ");

	if (e_ident[EI_DATA] == ELFDATA2MSB)
	{
		e_entry = ((e_entry << 8) & 0xff00ff00) | ((e_entry >> 8) & 0xFF00FF);
		e_entry = (e_entry << 16) | (e_entry >> 16);
	}

	if (e_ident[EI_CLASS] == ELFCLASS32)
		printf("%#x\n", (unsigned int)e_entry);
	else
		printf("%#lx\n", e_entry);
}

/**
 * check_if_elf - checks if file is elf
 * @e_ident: the array of bytes on how to interpret the file
 * @file: the file
 * @fd: the file descriptor
 *
 * Return: nothing.
 */
void check_if_elf(unsigned char *e_ident, const char *file, int fd)
{
	if (e_ident[0] != ELFMAG0 || e_ident[1] != ELFMAG1 ||
			e_ident[2] != ELFMAG2 || e_ident[3] != ELFMAG[3])
	{
		dprintf(STDERR_FILENO,
			"Invalid ELF magic number in file %s\n", file);
		close(fd);
		exit(98);
	}
}

/**
 * print_header - prints the ELF header information of an ELF file
 * @file: the file name
 * @fd: the file descriptor
 *
 * Return: nothing.
 */
void print_header(const char *file, int fd)
{
	int op_res;
	Elf64_Ehdr hdr;
	Elf64_Ehdr *hdr_ptr = &hdr;

	op_res = read(fd, hdr_ptr, sizeof(hdr));
	if (op_res == -1)
	{
		dprintf(STDERR_FILENO,
			"Error: Unable to read ELF header from file %s\n",
			file);
		close(fd);
		exit(98);
	}

	check_if_elf(hdr_ptr->e_ident, file, fd);

	printf("ELF Header:\n");
	print_magic(hdr_ptr->e_ident);
	print_class(hdr_ptr->e_ident);
	print_data(hdr_ptr->e_ident);
	print_version(hdr_ptr->e_ident);
	print_osabi(hdr_ptr->e_ident);
	print_abi_version(hdr_ptr->e_ident);
	print_type(hdr_ptr->e_ident, hdr_ptr->e_type);
	print_entry(hdr_ptr->e_ident, hdr_ptr->e_entry);

	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Unable to close fd %d\n", fd);
		exit(98);
	}
}

/**
 * main - display the information contained in the ELF header at the start of
 * an ELF file
 * @argc: the number of program arguments
 * @argv: the program arguments
 *
 * Return: Always 0. If the file is not an ELF file, or on error, exit with
 * status code 98.
 */
int main(int argc, char *argv[])
{
	int fd;

	if (argc != 2)
	{
		printf("Usage: %s elf_filename\n", argv[0]);
		exit(98);
	}

	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Unable to open file %s\n",
				argv[1]);
		exit(98);
	}

	print_header(argv[1], fd);
	return (0);
}
