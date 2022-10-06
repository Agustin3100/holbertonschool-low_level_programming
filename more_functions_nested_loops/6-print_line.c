/**
 * print_line - print the alphabet
 * @n: int for characters
 *
 * Description: prints numberz
 * Return: value 0 (success)
 */
#include "main.h"
void print_line(int n)
{
while (n > 0)
{
_putchar('_');
--n;
}

if (n <= 0)
{
_putchar('\n');
}
}
