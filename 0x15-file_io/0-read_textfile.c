#include <stdio.h>

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>

#include <unistd.h>

/**
 * read_textfile - read text file
 * @filename: the file name
 * @letters: letters to read
 *
 * Return: number of characters read/print on stdout
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buf = malloc(letters + 1);
	ssize_t n = 0;

	if (filename == NULL)
	{
		return (0);
	}
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		printf("could'nt open %s", filename);
		return (-1);
	}

	read(fd, buf, letters);
	n = printf("%s", buf);

	return (n);
}
