#include <stdio.h>

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>

#include <unistd.h>
#include <string.h>
/**
 * append_text_to_file - create text file
 * @filename: the file name
 * @text_content: string to write to file
 *
 * Return: integer assigned to meaning of state
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int n;


	if (filename == NULL)
	{
		return (-1);
	}

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		return (1);
	}
	lseek(fd, 0, SEEK_END);
	n = write(fd, text_content, strlen(text_content));
	if (n <= 0)
	{
		return (-1);
	}
	close(fd);
	return (1);
}
