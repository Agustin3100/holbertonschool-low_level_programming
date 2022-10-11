/**
 * *_strcpy - copies a string from src to dest
 * @dest: char string for example
 * @src:  char string for example
 *
 * Description: updates value of pointer
 * Return: value 0 (success)
 */
#include "main.h"
#include <stdio.h>
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] >= '\0'; ++i)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (src);
}
