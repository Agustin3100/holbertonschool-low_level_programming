#include "main.h"
void more_numbers(void)
{
	int m, n = 0;

for (m = 0; m <= 9; m++)
{
	for (n = 0; n <= 14; n++)
	{
		if (n >= 10)
		{
			_putchar(n / 10 + '0');
		}
	_putchar(n % 10 + '0');
        
	}
	_putchar('\n');

}

}
