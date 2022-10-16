/**
 * _print_rev_recursion - prints a string in reverse
 * @s: char for exmaple
 *
 * Description: prints numberz
 * Return: void
 */
#include "main.h"
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
