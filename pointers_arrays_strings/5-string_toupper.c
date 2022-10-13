/**
 * *string_toupper - converts lowercase of a string to uppercasse
 * @str: pointer to a string for example
 *
 * Description: updates value of pointer
 * Return: value str (string in uppercasse)
 */
char *string_toupper(char *str)
{
int i;
for (i = 0; str[i] != '\0'; i++)
{
	if (str[i] >= 97 && str[i] <= 122)
	{
		str[i] = str[i] - 32;
	}
}
return (str);
}
