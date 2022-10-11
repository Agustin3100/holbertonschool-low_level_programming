#include "main.h"
/**
 * print_rev- printing reverse
 *@s: pointer
 *Qc: counter
 * Return: always  0
 */

void print_rev(char *s)
{
int i;
i = 0;
	while (*s)
	{
		i++;
		s = s + 1;
	}
	while (i > 0)
	{
		s = s - 1;
		_putchar (*s);
		i--;
	}
	_putchar('\n');
}
