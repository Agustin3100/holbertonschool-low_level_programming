#include "main.h"
/**
 * *_strncpy - copies a string exactly like strcpy
 * @dest: char pointer for example
 * @src: char pointer for example
 * @n: int for example
 *
 * Description: updates value of pointer
 * Return: value 0 (success)
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
	{		dest[i] = '\0';
		}
	return (dest);

}
