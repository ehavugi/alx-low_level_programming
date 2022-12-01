#include <stdlib.h>
/**
 * binary_to_uint  - convert binary to int
 * @b: binary
 *
 * Return: uint
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int out = 0;
	int index = 0;
	int len  = 0;

	if (b == NULL)
	{
		return (0);
	}
	while (b[len] != '\0')
	{
		len += 1;
	}
	/* Convert to int */
	len = len - 1;
	while (index <= len)
	{
		if (b[len - index] == '\0')
		{
			index += 1;
			continue;
		}
		else if (b[len - index] == '1')
		{
			out += (1 << index);
		}
		else if (b[len - index] == '0')
		{
			index += 1;
			continue;
		}
		else
		{
			return (0);
		}
		index += 1;
	}
	return (out);

}

