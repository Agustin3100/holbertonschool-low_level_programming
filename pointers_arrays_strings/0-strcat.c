#include "main.h"

/**
 * *_strcat - concatenate the strings
 * @dest: pointer
 * @src: pointer
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int n;

	for (i = 0 ; dest[i] != '\0' ; i++)
		;
	for (n = 0 ; src[n] != '\0' ; n++)
	{
		dest[i] = src[n];
		i++;
	}
	return (dest);
}
