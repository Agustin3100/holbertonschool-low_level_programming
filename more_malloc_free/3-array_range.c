#include <stdio.h>
#include <stdlib.h>
int *array_range(int min, int max)
{

        int i,j;
        int *p;
	
	
	
	
	j = max - min + 1;

	if(min > max)
	{
		return NULL;
	
	}

	

        p = malloc(sizeof(int)* (max - min +1));

	
	if(p == NULL)
	     {
		return NULL;
	     }



	for(i = 0; i < j; i++)
	{
		p[i] = min;
		min++;
	}


return p;





}
