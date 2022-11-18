#include "struct.h"
#include <stdlib.h>
#include <unistd.h>
int _putchar(char c)
  {
  return (write(1, &c, 1));
  }
 
 
  
 
  int printchar(va_list ap)
  {
      char c = va_arg(ap, int);
 
      int count = 0;
 
     if (c)
      {
          count = write(1, &c, 1);
         return (count);
      }
      return (0);
  }
 
  int printper(va_list ap)
  {
  (void)ap;
 
  write(1, "%", 1);
 
  return (1);
  }
 
  int printstr(va_list ap)
  {
 int i;
 int count = 0;
  char *str;
 
  str = va_arg(ap, char *);
  if (str == NULL)
  return (-1);
	 
  while (str[i])
  {
  count = write(1, &str[i], 1);
  i = i + 1;
  }
             return (count);
	}
