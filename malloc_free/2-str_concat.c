/**
 * str_concat - concatenates two strings
 * @s1: char pointer for example
 * @s2: char pointer for example
 *
 * Description: updates value of pointer
 * Return: NULL if p s1 or s2 is NULL
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char *str_concat(char *s1, char *s2)
{

unsigned int s1len = strlen(s1);
unsigned int s2len = strlen(s2);
unsigned int len = s1len + s2len + 1;
unsigned int i;
char *p;



p = malloc(sizeof(char) * len);

	if (p == NULL)
	{
		return (NULL);
	}

	if (s1 == NULL || s2 == NULL)
	{
		return (NULL);
	}

	for (i = 0; s1[i]; i++)
	{
		p[i] = s1[i];
	}
	for (i = 0; s2[i]; i++)
	{
		p[s1len + i] = s2[i];
	}
return (p);
}
