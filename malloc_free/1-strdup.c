#include <stdio.h>
#include <stdlib.h>
char *_strdup(char *str)
{
char *p;
unsigned int i;
unsigned int j;

if( str == NULL)
{	return(NULL);
}
for(i = 0; str[i]; i++)
;
p = malloc(sizeof(char)* i + 1);  /*This loop and malloc to reserve the same amount of memory for the copy**/

if(p == NULL)
{	return(NULL);
}
for(j = 0; str[j]; j++)
{  
       	p[j] = str[j];
	
}

return (p);


}
