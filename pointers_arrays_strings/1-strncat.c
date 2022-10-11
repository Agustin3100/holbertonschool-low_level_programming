#include "main.h"
int _strlen(char *s);
char *_strncat(char *dest, char *src, int n)
{
int i,j;
i = 0;
j = 0;

while(src[i] != n){
	i++;
}
while (dest[j] != n){
	
src[i] = dest[j];

j++;
i++;
}


return (dest);  
}









int _strlen(char *s)
{
        int lt = 0;

        while (*s)
        {
                lt++;
                s = s + 1;
        }
        return (lt);
}

