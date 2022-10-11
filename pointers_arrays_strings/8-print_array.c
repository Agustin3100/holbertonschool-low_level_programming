/**
 * print_array - prints the contents of an array of ints
 * @a: int pointer for example
 * @n: total number of the array to be prnted
 *
 * Description: updates value of pointer
 * Return: value 0 (success)
 */
#include <stdio.h>
void print_array(int *a, int n)
{
int i;
	if (n > 0)
	{
		for (i = 0; i <= n - 1; i++)
		{
			printf("%d", a[i]);
			if (i != (n - 1))
				printf(", ");
		}
	}
	printf("\n");
}
