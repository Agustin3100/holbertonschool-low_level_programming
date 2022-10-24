#include <stdio.h>
#include <stdlib.h>
void *_calloc(unsigned int nmemb, unsigned int size)
{

	int *p;
	unsigned int i;



if(nmemb == 0 || size == 0)
{
	return 0;
}

for(i = 0; i < nmemb; i++)
{
	p = malloc(sizeof(size)* nmemb);
	
	p[i] = 0;
}

if(p == NULL)
{
	return NULL;
}
return p;
}
