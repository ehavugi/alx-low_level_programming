/**
 * leet - encodes a string in 1337
 * @str: input string
 *
 * Return: a modified string
 */

char *leet(char *str)
{
	/* the mapping in to out for replacements */
	char *in = "aAeEoOtTlL";
	char *out = "4433007711";
	int index = 0;
	int r_index = 0;

	while (str[index] != '\0')
	{
		r_index = 0;
		while (in[r_index] != '\0')
		{
			if (in[r_index] ==  str[index])
			{
				str[index] = out[r_index];
			}
			r_index += 1;
		}
		index += 1;
	}
	return (str);
}

