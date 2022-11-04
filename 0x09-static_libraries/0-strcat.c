/**
 * _strcat - concatenate two strings.
 * @dest: input for  starting string
 * @src: input string to be added to dest string
 *
 * Return:  char pointer to a modified string dest after concatenation.
 */
char *_strcat(char *dest, char *src)
{
	int size_dest = 0;
	int index = 0;

	/* find the location '\0' in dest string */
	while (dest[size_dest] != '\0')
	{
		size_dest += 1;
	}

	/* Concatenate src to dest */
	while (src[index] != '\0')
	{
		dest[size_dest + index] = src[index];
		index += 1;
	}
	/* Add  terminating null byte to dest*/
	dest[size_dest + index] = '\0';
	return (dest);
}
