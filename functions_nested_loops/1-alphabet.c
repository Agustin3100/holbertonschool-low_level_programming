/**
 * print_alphabet - print the alphabet
 * Description: prints numberz
 * Return: value 0 (success)
 */

#include "main.h"
void print_alphabet(void)
{
char c;

for (c = 'a' ; c <= 'z' ; c++)
{	_putchar(c);
}
_putchar('\n');
return;
}
