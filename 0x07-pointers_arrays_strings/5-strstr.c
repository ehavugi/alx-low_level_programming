/**
 * _strstr - locate a substring
 * @haystack: string to search in
 * @needle: string to search
 *
 * Return: pointer to the beginning of found substring or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int index = 0;
	unsigned int index2 = 0;
	unsigned int current2 = 0;
	unsigned int max = 0;
	char *out ='\0';

	while (haystack[index] != '\0')
	{
		while (needle[index2] != '\0')
		{
			if (haystack[index] == needle[index2])
			{
				if (current2 == index2)
				{
					current2 += 1; }
				else
				{
					current2 = 0; }
				if (max  == current2)
				{
					out = needle;
					return (out);
				}
			}
			index2 +=  1;
			if (needle[index2] == '\0')
			{
				max = index2 - 1;
			}
		}
		index2 = 0;
		index += 1;
	}
	return (out);
}
