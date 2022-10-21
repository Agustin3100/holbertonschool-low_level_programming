#include <stdlib.h>
#include <stdio.h> 
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *p;

	p = malloc(sizeof(char)*size);

if (size == 0 || p == NULL)
{	return (NULL);
}
	for(i = 0; i < size; i++)
	{
		
		p[i] = c;
	}
 return(p);
}
