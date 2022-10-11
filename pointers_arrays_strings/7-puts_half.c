#include "main.h"
/**
 * puts_half - prints the half of a string
 * @s: char pointer for example
 *
 * Description: updates value of pointer
 * Return: value 0 (success)
 */
int _strlen(char *s);

void puts_half(char *str)
{
int i;
	int lt = _strlen(str) - 1;
	int lh = (lt - 1) / 2;

	if ((lt - 1) % 2 != 0)
	{
		lh++;

	}
	else
	{
		str += lh + 1;
	}
	for (i = lh; i < lt; i++)
	{
		_putchar(*str);
		str++;
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
