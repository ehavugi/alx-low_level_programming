#include "main.h"
#include <string.h>

/**
 * _islower -- function entry
 *
 * @c : input alphabet
 *
 * Return: 1 if lower 0 otherwise.  Error code otherwise
 **/
int  _islower(int c)
{
	if ((c > 97) && (c < 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
