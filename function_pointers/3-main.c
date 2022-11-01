#include <stdio.h>
#include "3-calc.h"
int main(int argc, char *argv[])
{

int a,b,c;
char *op;


if(argc != 4)
{
	printf("Error\n");
	exit(98);
}

a = atoi(argv[1]);
b = atoi(argv[3]);
op = argv[2];

if(*op < 47 && *op > 47)
{
	printf("Error\n");
	exit(99);

}

c = (*get_op_func)(op)(a,b);

	 

	printf("%d\n",c);

	
			
return 0;
}
