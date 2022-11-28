#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
#include <string.h>
/**
 * main - main fx
 * @argc: number of arguments
 * @argv: list of arguments
 *
 * Return: 0 or error code
 */
int main(int argc, char *argv[])
{
	int result;
	char op;
	int a;
	int b;
	int is_op;

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}
	is_op = strlen(argv[2]) == 1;
	a = atoi(argv[1]);
	op = argv[2][0];
	b = atoi(argv[3]);
	if ((op == '/' || op == '%') && b == 0)
	{
		printf("Error\n");
		return (100);
	}
	if  ((op == '+' || op == '-' || op == '*' || op == '/' || op == '%') && is_op)
	{
		result = get_op_func(argv[2])(a, b);
		printf("%d\n", result);
		exit(result);
	}
	else
	{
		printf("Error\n");
		return (99);
	}
}
