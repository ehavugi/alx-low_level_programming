#include <stdio.h>

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>

#include <unistd.h>
#include <string.h>
/**
 * create_file - create text file
 * @filename: the file name
 * @text_content: string to write to file
 *
 * Return: number of characters read/print on stdout
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	int n;


	if (filename == NULL)
	{
		return (-1);
	}

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
	{
		return (-1);
	}

	n = write(fd, text_content, strlen(text_content));
	if (n == -1)
	{
		return (-1);
	}
	return (1);
}
