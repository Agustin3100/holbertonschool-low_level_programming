/**
 * _calloc - allocates memory for an array using malloc
 * @nmemb: number of elemens for the array
 * @size: size of the array
 *
 * Description: updates value of pointer
 * Return: NULL if malloc fails
 */
#include <stdio.h>
#include <stdlib.h>
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *p;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (0);
	}
	p = malloc(sizeof(size) * nmemb);

	for (i = 0; i < nmemb; i++)
	{
		p[i] = 0;
	}

	if (p == NULL)
	{
		return (NULL);
	}

	return (p);
}
