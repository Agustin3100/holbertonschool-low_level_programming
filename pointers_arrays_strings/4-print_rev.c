#include "main.h"
/**
 * print_rev- printing reverse
 *@s: pointer
 * Return: always  0
 */

void print_rev(char *s)
{
	int aux = 0;

	while (*(s + aux) > '\0')
	{
		aux++;
	}
	while (aux > 0)
	{
		_putchar (*(s + aux));
		aux--;
	}
	_putchar('\n');
}
