#include <stdio.h>
/**
 * main - main function
 * @argc: number of arguments
 * @argv: array of strings
 *
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	char *name = argv[0];

	*name = '\0';
	printf("%d\n", argc - 1);
	return (0);
}
