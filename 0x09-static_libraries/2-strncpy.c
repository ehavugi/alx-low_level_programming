/**
 * _strncpy - copies a string as strncpy in standard libary
 * @dest: input destination string
 * @src: input source string
 * @n: number of chars to copy
 *
 * Return: a pointer to a modified dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int index = 0;
	int nulled = 0;

	while (index < n)
	{
		if (nulled)
		{
			dest[index] = '\0';
		}
		else
		{
			dest[index] = src[index];
		}

		if (src[index] == '\0')
		{
			nulled = 1;
		}
		index += 1;
	}
	return (dest);
}
