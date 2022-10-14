/**
 * *_strchr -  locates a character in a string
 * @s: char pointer variable for examle
 * @c: char for example
 *
 * Description: printz numberz
 * Return: NULL
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (c == s[i])
		{
			return (&s[i]);
		}
	}
	if (c == s[i])
	{
		return (&s[i]);
	}
	return (NULL);
}
