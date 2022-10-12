/**
 * *_strncat - concatenates two string depending of n bytes
 * @dest: dest pointer for example
 * @src: src pointer for example
 * @n: int with the total lenght of the strings
 *
 * Description: updates value of pointer
 * Return: value 0 (success)
 */
#include "main.h"

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;
		for (i = 0 ; dest[i] != '\0'; i++)
		;
		for (j = 0 ; src[j] != src[n] ; j++)
		{
		dest[i] = src[j];
		i++;
				}
	return (dest);
}
