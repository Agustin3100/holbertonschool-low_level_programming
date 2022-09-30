#include <stdio.h>
int main (void)
{

	int b;
	char az;

for (b = 0; b <= 9; ++b)
{

	putchar((b % 10)+'0');

}


for (az = 'a'; az <= 'f'; az++)
{

	putchar(az);

}

putchar('\n');

return (0);
}          
