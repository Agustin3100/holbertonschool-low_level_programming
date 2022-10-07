#include "main.h"
/**
 *_puts - prinst the content of the string
 *@str: string
 *Return: void
*/
void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str);
		str = str + 1;
	}
	_putchar(10);
}	
