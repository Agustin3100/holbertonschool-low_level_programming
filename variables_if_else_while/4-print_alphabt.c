#include <stdio.h>
/**
 * * main - print the alphabet without q and e
  * Return: value 0 (success)
 */

int main(void)
{
char t = 'a';

for (t = 'a' ; t <= 'z' ; t++)
{

if (t != 'q')

{

if (t != 'e')

{
	putchar(t);
}
}
}
putchar('\n');
return (0);
}

