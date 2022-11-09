#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - string length
 * @str: string length
 *
 * Return: int for length
 */
int _strlen(char *str)
{
	int index = 0;

	while (str[index] != '\0')
	{
		index += 1;
	}
	return (index);
}

/**
 * argstostr - args to string
 * @ac: Number of arguments
 * @av: array
 *
 * Return: return arguments seperated by \n.
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int size = 0;
	int i = 0;
	int y = 0;
	int index = 0;


	for (i = 0; i < ac; i++)
	{
		size += _strlen(av[i]) + 1;
	}
	i = 0;
	str = malloc(size);
	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	while (i < ac)
	{
		index = 0;
		while (av[i][index] != '\0')
		{
			str[y] = (av[i][index]);
			y += 1;
			index += 1;
		}
		i += 1;
		str[y] = '\n';
		y += 1;
	}
	str[y + 1] = '\0';
	return (str);
}
