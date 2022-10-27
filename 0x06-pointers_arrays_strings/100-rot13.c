/**
 * rot13 - encodes a string using rot13
 * @str: input string
 *
 * Return: returns a modified string
 */
char *rot13(char *str)
{
	int index = 0;
	int r_index = 0;
	char in[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char out[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	int no_changed = 1;

	while (str[index] != '\0')
	{
		r_index = 0;
		while (in[r_index] != '\0' && no_changed)
		{
			if (in[r_index] == str[index])
			{
				str[index] = out[r_index];
				no_changed = 0;
			}
			r_index += 1;
		}
		index += 1;
		no_changed = 1;
	}
	str[index] = '\0';
	return (str);
}
