/**
 * _strlen - prints the lenght of a string
 * @s: char pointer for example
 *
 * Description: updates value of pointer
 * Return: value 0 (success)
 */
#include <string.h>
#include <stdio.h>
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
