#include "main.h"
/**
 *times_table - el trabajo
 *Return: Always 0.
 */

void times_table(void)
{
	int a, b;

	for (a = 0 ; a <= 9 ; ++a)
	{
		for (b = 0 ; b <= 9 ; ++b)
		{
			if ((a * b) >= 10)
			{
				_putchar(' ');
				_putchar((a * b) / 10 + '0');
				_putchar((a * b) % 10 + '0');
			}
			else if ((a * b) < 10 && b != 0)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar((a * b) + '0');
			}
			else
				_putchar('0');
			if (b < 9)
			{
				_putchar(',');
			}
			else
				_putchar('\n');
		}
	}
}
