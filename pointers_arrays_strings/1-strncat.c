#include "main.h"
char *_strncat(char *dest, char *src, int n)
{
 int i,j;
  
i = 0;
j = 0;

for( i = 0; src[i]; i++)
{



while (src [j] != src[n])
{	dest[i + j] = src[j];
	j++;

	} }  
	dest[i + j] = '\0';
return(dest);

}
