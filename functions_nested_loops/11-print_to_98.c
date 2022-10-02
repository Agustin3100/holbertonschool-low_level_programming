#include <stdio.h>
#include "main.h"


void print_to_98(int n)
{


while( n < 98 ) {
   
      printf("%d, ", n);
      n++;
		
      if( n == 90) {
         
         break;
      }
   }
 
   return;
}

