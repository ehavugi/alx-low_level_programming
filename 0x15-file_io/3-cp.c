#include <stdio.h>

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>

#include <unistd.h>


int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Usage: cp file_from file_to\n");
		exit(98);
	}


	printf("Error: Can't read from file %s\n", argv[1]);
	exit(98);


	printf("Error: Can't close fd %d\n", fd);

	return(0);
}
