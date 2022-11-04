/**
 * _strncat - concatenates two strings with
 * @dest: the starting string.
 * @src: string to concatenate to dest
 * @n: number of char to take concatenate to dest from src.
 *
 * Return: a pointer to a modified string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int size_dest = 0;
	int index  = 0;

	/* Find the location of null in dest string */
	while (dest[size_dest] != '\0')
	{
		size_dest += 1;
	}

	/* Concatenated src into dest until n chars or null*/
	while ((src[index] != '\0') && (index < n))
	{
		dest[size_dest + index] = src[index];
		index += 1;
	}
	/* Add null back to dest string */
	dest[size_dest + index] = '\0';
	return (dest);
}
