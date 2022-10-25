#include <stdio.h>
#include <stdlib.h>
int **alloc_grid(int width, int height)
{
 	int i;
	
	int **p;

	p = malloc(sizeof(int *) * width);

	if(p == NULL)
	{
		return (NULL);
	}

	for(i = 0; i < width; i++)
	{	  
  		p[i] = malloc(sizeof(int) * height);

	}
		return (p);
}
