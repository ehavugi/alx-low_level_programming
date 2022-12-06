#include <stdio.h>

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <string.h>

#include <unistd.h>

/**
 * main - main
 * @argc: number of arguments
 * @argv: list of arguments
 *
 * Return: int
 */
int main(int argc, char *argv[])
{
	int fd1;
	int fd2;
	char buf[1024];
	int len = 1024;

	if (argc != 3)
	{
		printf("Usage: cp file_from file_to\n");
		exit(98);
	}
	/*create file handle for writing to */

	fd2 = open(argv[2], O_CREAT | O_WRONLY, 0664);

	fd1 = open(argv[1], O_RDONLY);
	if (fd1 == -1)
	{
		printf("Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	while (len >= 1024)
	{
		read(fd1, buf, 1024);
		len = dprintf(fd2, "%s", buf);
	}

	close(fd1);
	close(fd2);

	return (0);
}
