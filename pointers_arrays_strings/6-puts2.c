/**
 * puts2 - prinst the content of the string
 *@str: print the even contents of a string
 *
 * Description: updates value of pointer
 *Return: void
*/
#include "main.h"
#include <stdio.h>
void puts2(char *str)
{

int i;
i = 0;
	if (i % 2 == 0)
	 {
        while (*str)
	 {
	 _putchar(*str);
	str = str + 2;
	     }
	 }
}
