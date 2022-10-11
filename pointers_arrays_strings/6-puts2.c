/**
 * puts2 - prinst the content of the string
 *@str: print the even contents of a string
 *Qi: counter
 *
 * Description: updates value of pointer
 *Return: void
*/
#include "main.h"
#include <stdio.h>
void puts2(char *str)
{
	int i = 0;
	int cont = _strlen(str);

	for (; i < cont; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}


/**
 * _strlen - prints the lenght of a string
 * @s: char pointer for example
 *
 * Description: updates value of pointer
 * Return: value 0 (success)
 */
int _strlen(char *s)
{
	int lt = 0;

	while (*s)
	{
		lt++;
		s = s + 1;
	}
	return (lt);
}
