#include <stdio.h>
void print_array(int *a, int n)
{
int i;

	if (n > 0)
	{
		for (i = 0; i <= n - 1; i++)
		{
            printf("%d ", a[i]);
	    printf(",");
		}
	}
}
