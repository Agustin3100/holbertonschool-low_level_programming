#include "main.h"
/**
 * print_alphabet_x10 - print the alphabet
 * Description: prints numberz
 * Return: value 0 (success)
 */

void print_alphabet_x10(void)
{
char c;
int a;

c = 'a';
a = 0;
while (a < 10)
{

for (c = 'a' ; c <= 'z' ; c++)

{

_putchar(c);

}
_putchar('\n');
a++;
}

return;

}
