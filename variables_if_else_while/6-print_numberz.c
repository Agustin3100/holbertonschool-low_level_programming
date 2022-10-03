/**
 * main - print the alphabet
 * Description: prints numberz
 * Return: value 0 (success)
 */

#include <stdio.h>
int main(void)
{

int b;

for (b = 0; b <= 9; ++b)
{

putchar((b % 10) + '0');

}
putchar('\n');
return (0);
}
