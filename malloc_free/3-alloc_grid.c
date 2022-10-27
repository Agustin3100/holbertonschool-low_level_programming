#include "main.h"
/**
 *alloc_grid - returns a pointer
 *
 * @width: Width of grid
 * @height: height of grid
 *
 * Return: NULL if malloc fails
 * on success: a pointer to a 2 dimensional array of integers
 */

int **alloc_grid(int width, int height)
{
	int **p;
	int i;
	int j;
	int k;

	if (width <= 0 || height <= 0)
		return (NULL);

	p = malloc(sizeof(int *) * height);
	if (p == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		p[i] = malloc(sizeof(int) * width);
		if (p[i] == NULL)
		{
			while (i >= 0)
			{
				free(p[i]);
				i--;
			}
			free(p);
			return (NULL);
		}
	}

	for (j = 0; j < height; j++)
	{
		for (k = 0; k < width; k++)
			p[j][k] = 0;
	}
	return (p);
}
