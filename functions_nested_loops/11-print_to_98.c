/**
 * print_to_98 - print the alphabet
 * @n: int for characters
 *
 * Description: prints numberz
 * Return: value 0 (success)
 */

#include <stdio.h>
#include "main.h"
void print_to_98(int n)
{
while (n < 100)
{
printf("%d, ", n);
n++;

if (n >= 98)
{

break;

}
}
printf("98\n");
return;
}

