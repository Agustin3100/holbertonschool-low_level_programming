#include<stdio.h>
#include "main.h"
/**
 * print_last_digit - main function
 * Return: last_digit
 * @x: int
 */

int print_last_digit(int x)
{
	int ld;

	ld = x % 10;

	if (ld < 0)
	{
		ld = ld * -1;
		_putchar(ld + '0');
	return (ld);
	}
	_putchar(ld + '0');
	return (ld);
}
