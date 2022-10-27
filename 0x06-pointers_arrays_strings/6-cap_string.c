/**
 * cap_string - capitalize all words in a string strings
 * @str: input string
 *
 * Return: modified str
 */
char *cap_string(char *str)
{
	char seperators[] = "	 \n,;.!?\"(){}";
	int index = 0;
	int prev_seperator = 0;
	int sep_index;

	while (str[index] != '\0')
	{
		sep_index = 0;
		while (seperators[sep_index] != '\0' && index > 0)
		{
			if (seperators[sep_index] == str[index -  1])
			{
				prev_seperator = 1;
			}
			sep_index += 1;
		}
		if (prev_seperator || index == 0)
		{
			if (str[index] >= 'a' && str[index] <= 'z')
			{
				str[index] = str[index] - 32;
			}
		}
		index += 1;
		prev_seperator = 0;
	}
	return (str);
}

