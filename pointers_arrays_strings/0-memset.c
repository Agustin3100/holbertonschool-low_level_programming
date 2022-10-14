#include "main.h"

/**
 * *_memset -  fills an empty space with a constant byte
 * @b: char variable for examle
 * @s: char pointer for example
 * @n: unsigned int
 *
 * Description: printz numberz
 * Return: value of s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
