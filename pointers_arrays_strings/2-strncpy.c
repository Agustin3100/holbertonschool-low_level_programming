#include "main.h"

char *_strncpy(char *dest, char *src, int n)
{
  
  char *p1,*p2;
  p1 = src;
  p2 = dest;

while (*p1 != n) {
 
        /* Copy the content of s1 to s2 */
        *p2 = *p1;
        p1++;
        p2++;
    }
return(dest);
}
