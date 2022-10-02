#include "main.h"
int print_sign(int n)
{
     char c;
     char d;
     int i;

     c = '-';
     d = '+';
     i = 0;
{
     if ( n < 0)
	{ 
		_putchar(c);
                return (-1);

	}		
     else if( n == 0){
            
	     _putchar(i);
             return(0);    
     
     }
    else{
       
	    _putchar(d);
              return(1);

             }






} 
}
