#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/**
 * main - Tells if the random number is positive or negative
 * Return: value 0 (success)
 **/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n < 0)
	{
	printf("el resultado es negativo %d\n", n);
	}
	else
	{
	printf("el resultado es positivo %d\n", n);
	}
	return (0);
}
