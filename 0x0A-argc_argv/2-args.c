#include <stdio.h>
/**
 * main - main function
 * @argc: number of argumentzs
 * @argv: array of string
 *
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int index = 0;

	while (index < argc)
	{
		printf("%s\n", argv[index]);
		index += 1;
	}
	return (0);
}
