#include "main.h"
#include <math.h>
/**
 * aux_funq - complement function
 * @x: int
 * @y: int
 * Return: square root or -1 if it is not natural.
 */
int aux_funq(int x, int y)
{
	if (x < y * y)
	{
		return (-1);
	}
	if (x == y * y && x % y == 0)
	{
		return (y);
	}
	if (x != y * y)
	{
		return (aux_funq(x, y + 1));
	}
	return (0);
}

/**
 * _sqrt_recursion - gives the square root of a natura number
 * Return: square root
 * @n: int for example
 */
int _sqrt_recursion(int n)
{
	return (aux_funq(n, 0));

}
