#include <stdarg.h>
  #include <stdio.h>
  #include "struct.h"
  #include <stdlib.h>
#include <unistd.h>
   /**
     *_printf - function print segun format.
     * @f is a character string is composed of zero o more directives.
     * Return: count of character printed.
     */
  int _printf(const char *format, ...)
{
      int i,j;
  va_list ap;
  

 
  int count = 0;
  str_t id[] = {
	 	{"c",printchar},
		{"s",printstr},
		
	};

 if (format == NULL)
 {
     return(-1);
 }

 va_start(ap, format);


 for (i = 0; format[i]; i++)
 {
 if (format[i] != '%')
  {
   write(1, &format[i], 1);
   count += 1;
  
  }
  				
   
	  for(j = 0; j < 2; j++)
	  {    

                if (format == id[i].arg)
               {
                        va_arg(ap, int*);


                          count += id[i].f(ap);
			  


               }	


	}

  


 		
 
  
  
  					
  }
  va_end(ap);
  return (count);
  }

 
 
 

