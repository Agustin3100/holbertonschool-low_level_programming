#include "main.h"
/**
 * print_most_numbers - Entry point
 *
 * Return: 0 , 1
 */

void print_most_numbers(void)
{
	char a;

	for (a = '0' ; a <= '9' ; a++)
	{
		if (a == '2' || a == '4')
		{
		}
		else
		{
		_putchar(a);
	}
	}
	_putchar('\n');
}
