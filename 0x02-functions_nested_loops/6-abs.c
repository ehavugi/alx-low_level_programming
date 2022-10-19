#include "main.h"
#include <string.h>

/**
 * _abs -- function entry
 *
 * @c : input number
 *
 * Return: 1 if lower 0 otherwise.  Error code otherwise
 **/
int _abs(int c)
{
	if (c >= 0)
	{
		return (c);
	}
	else
	{
		return (-1 * c);
	}
}
