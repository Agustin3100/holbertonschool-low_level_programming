#include "main.h"
#include <stdio.h>

int _strlen(char *s);

/**
 * rev_string - function that reverses a string.
 * @s: pointer
 *
 * Return: void.
 */
void rev_string(char *s)
{
	int lt = _strlen(s) - 1;
	int i;
	char aux;
	int lh = lt / 2;

	for (i = 0; i <= lh; i++)
	{
		aux = s[i];
		s[i] = s[lt];
		s[lt] = aux;
		lt--;
	}
}

/**
 * _strlen - function to see lenght of strings.
 * @s: pointer
 * Return: lenght of the sring.
 */
int _strlen(char *s)
{
	int lt = 0;

	while (*s)
	{
		lt++;
		s = s + 1;
	}
	return (lt);
}
