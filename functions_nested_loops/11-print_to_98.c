#include <stdio.h>
#include "main.h"


void print_to_98(int n)
{


while( n < 100 ) {
   
      printf("%d, ", n);
      n++;
		
      if( n >= 98) {
         
         break;
      }
   }
 
   return;
}

