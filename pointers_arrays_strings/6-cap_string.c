/**
 * *cap_string - Capitalizes words of a string
 * @str: pointer to a string for example
 *
 * Description: updates value of pointer
 * Return: value str (value of the string)
 */
char *cap_string(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i == 0)
		{
			if (str[i] >= 97 && str[i] <= 122)
					{
				str[i] = str[i] - 32;
					}
		}
		else if (str[i] == ' ')
		{
			if (str[i] >= 97 && str[i] <= 122)
			{
				str[i] = str[i] - 32;
			}
		}
	}
	return (str);
}
