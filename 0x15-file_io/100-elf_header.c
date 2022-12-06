#include <elf.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>

#include <unistd.h>

/**
 * main- main 
 * @argc: number of arguments
 * @argv: list of arguments
 *
 * Return: int
 */

int main(int argc, char *argv[])
{
	int fd;
	int i = 0;
	Elf64_Ehdr header;
	if (argc != 2)
	{
		exit(98);
	}

	fd = open(argv[1], O_RDONLY);
	if(fd == -1)
	{
		exit(98);
	}
	read(fd,&header, sizeof(header));
	printf("ELF Header:\n");
	printf("%-11s"," Magic:");
	for (i = 0; i < 16; i++)
	{
		printf("%02x", (unsigned int) header.e_ident[i]);
		if (i <15)
			printf(" ");
	}
	printf("\n");
	
	printf("%-36s %d\n", "  Class:",header.e_ident[4]);
	printf("%-36s %d\n", "  Data:", header.e_ident[5]);
	printf("%-36s %d\n", "  Version:",header.e_machine);
	printf("%-36s %d\n", "  OS/ABI",header.e_ident[7]);
	printf("%-36s %d\n", "  ABI Version:",header.e_ident[8]);
	printf("%-36s %d\n", "  Type:", header.e_type);
	printf("%-36s 0x%lx\n", "  Entry point addres:", header.e_entry);
	printf("%-36s 0x%lx\n", "  Start of program headers:", header.e_entry);
	printf("%-36s 0x%lx\n", "  Start of section headers:", header.e_entry);
	printf("%-36s 0x%x\n", "  Flags:",  header.e_flags);
	printf("%-36s 0x%lx\n", "  Size of this header:", header.e_entry);
	printf("%-36s 0x%lx\n", "  Size of program headers:", header.e_entry);
	printf("%-36s 0x%lx\n", "  Number of program headers:", header.e_entry);
	printf("%-36s 0x%lx\n", "  Size of section headers:", header.e_entry);
	printf("%-36s 0x%lx\n", "  Number of section headers:", header.e_entry);
	printf("%-36s 0x%lx\n", "  Section header string table index:", header.e_entry);
	return (0);
}
