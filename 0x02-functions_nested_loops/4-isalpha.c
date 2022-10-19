#include "main.h"
#include <string.h>

/**
 * _isalpha -- function entry
 *
 * @c : input alphabet
 *
 * Return: 1 if lower 0 otherwise.  Error code otherwise
 **/
int  _isalpha(int c)
{
	if(((c > 64) && (c < 91)) || ((c > 96) &&  (c < 123)))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
