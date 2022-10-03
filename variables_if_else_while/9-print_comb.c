/**
 * main - print the alphabet
 * Description: prints numberz
 * Return: value 0 (success)
 */

#include <stdio.h>

int main(void)
{
int b = '0';

while (b <= '9')
{

putchar(b);

if (b != '9')
{
putchar(',');
putchar (' ');
}
b++;
}
putchar('\n');
return (0);
}
