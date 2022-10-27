#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - concatenates two strings considering n bytes
 * @max: string 1
 * @min: string 2
 *
 * Description: updates value of pointer
 * Return: NULL if malloc fails
 */
int *array_range(int min, int max)
{
	int i, j;
	int *p;

	j = max - min + 1;

	if (min > max)
	{
		return (NULL);
	}

	p = malloc(sizeof(int) * (max - min + 1));

	if (p == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < j; i++)
	{
		p[i] = min;
		min++;
	}
	return (p);
}
