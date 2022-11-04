#include <string.h>
#include "struct.h"
int (*funcs_op(const char *s))(char *){

	str_t arr[] = {
		{"c",_printchar},
		{"s",_printstr},		

	};

	int i;
	
i = 0;

	while(i < 2)
{
		if(format[i] == arr[i].arg)
		{

			return(arr[i].f);

		}
	i++;		
			
			
	}
	return NULL;
}
