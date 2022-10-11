#include "main.h"
int _strlen(char *s);
char *_strcat(char *dest, char *src)
{
 int i;
  
    int j = _strlen(src) -1;
  
    for (i = 0; src[i] != '\0'; i++) {
        dest[i + j] = src[i];
    }
    dest[i + j] = '\0';
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
