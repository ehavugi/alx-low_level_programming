#include <stdio.h>

/**
 * main - main
 * @argc:number of arguments
 * @argv: list of arguments
 *
 * Return:0 or exit code
 */

int main(int argc, char *argv[])
{
	int n;
	int i;
	unsigned char *op;


	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	n = atoi(argv[1]);
	if (n < 0)
	{
		printf("Error\n");
		return (2);
	}

	op = (unsigned char  *)(&main);
	for (i = 0; i < n; i++)
	{
		if (i == 0)
		{
			printf("%02x", *(op + i));
		}
		else
		{
			printf(" %02x", *(op + i));
		}
	}
	printf("\n");
	return (0);
}
