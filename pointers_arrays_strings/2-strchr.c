#include "main.h"

/**
 * *_strchr - locates a char in a string
 * @s: pointer for exmaple
 * @c: char for examle
 * Return: NUll
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
