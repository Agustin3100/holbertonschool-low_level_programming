/**
 * *malloc_checked - allocates memory using malloc
 * @b: unsigned int for example
 *
 * Description: updates value of pointer
 * Return: value 0 (success)
 */
#include <stdio.h>
#include <stdlib.h>
#include "main.h"

void *malloc_checked(unsigned int b)
{
	unsigned int *p;

	p = malloc(b);
	
	if (p == NULL)
	exit(98);
	return (p);
}
