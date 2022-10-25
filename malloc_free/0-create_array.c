/**
 * create_array - allocatrs memory for an array of strings
 * @size: size of the strings
 * @c: character for the string
 *
 * Description: updates value of pointer
 * Return: NULL if size is NULL or if malloc fails
 */
#include <stdlib.h>
#include <stdio.h>
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *p;

	p = malloc(sizeof(char) * size);

	if (size == 0 || p == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		p[i] = c;
	}

	return (p);
}
