#include <string.h>
#include <stdio.h>
int _strlen(char *s)
{
    
      int c = 0;
   while (s[c] != '\0')
      c++;

   return c;
}
