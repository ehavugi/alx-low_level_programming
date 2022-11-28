#include "3-calc.h"
#include <stdio.h>
/**
 * get_op_func - get operator functions
 * @s: an operator
 *
 * Return: operator function
 */
int (*get_op_func(char *s))(int a, int b)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;


	i = 0;
	while (ops[i].op != NULL)
	{
		if (ops[i].op[0] == s[0])
		{
			return (ops[i].f);
		}
		i += 1;
	}
	return (0);
}
