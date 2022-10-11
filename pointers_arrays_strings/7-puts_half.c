#include "main.h"
int _strlen(char *s);

void puts_half(char *str)
{
int i;
	int lt = _strlen(str) - 1;
	int lh = (lt -1) / 2;

	if ((lt - 1) % 2 != 0)
	{
		lh++;
	
	}
	else{
		str += lh + 1;
	}
	for (i = lh; i < lt; i++)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}






int _strlen(char *s)
{
	int lt = 0;

	while (*s)
	{
		lt++;
		s = s + 1;
	}
	return (lt;
}
