/**
 * string_nconcat - concatenates two strings considering n bytes
 * @s1: string 1
 * @s2: string 2
 * @n: n bytes from second string
 *
 * Description: updates value of pointer
 * Return: NULL if malloc fails
 */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int s1len = strlen(s1);
	unsigned int s2len = strlen(s2);
	unsigned int len = s1len + s2len + 1;
	unsigned int i;
	char *p;

p = malloc(sizeof(char) * len + n);

	if (s1 == NULL && s2 == NULL)
	{
		return ("");
	}

	if (p == NULL)
	{
		return (NULL);
	}

	if (s2len >= n)
	{
		s2len = n;
	}
		for (i = 0; s1[i]; i++)
		{
			p[i] = s1[i];
		}
		for (i = 0; s2[i] != s2[n]; i++)
		{
			p[s1len + i] = s2[i];
		}
		return (p);
}
