/**
 * print_numbers - print the alphabet
 *
 * Description: prints numberz
 * Return: value 0 (success)
 */
#include "main.h"
void print_numbers(void)
{

int c;


c = -1;
while (c < 9)
{
++c;
_putchar(c + '0');
}
_putchar('\n');
}
