#include <stdio.h>
/**
 * main - print the alphabet
 * Description: prints numberz
 * Return: value 0 (success)
 */
int main(void)
{
char ch;

for (ch = 'z'; ch >= 'a'; ch--)
{
putchar(ch);
}
putchar('\n');
return (0);
}
