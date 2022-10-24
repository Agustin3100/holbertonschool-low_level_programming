#include <stdio.h>
#include <stdlib.h>
void *_calloc(unsigned int nmemb, unsigned int size)
{

	unsigned int *p;

p = 0;
if(nmemb == 0 || size == 0)
{
	return 0;
}

p = malloc(sizeof(size)* nmemb);

if(p == NULL)
{
	return NULL;
}
return p;
}
