/**
 * _pow_recursion - makes the powr of x by y
 * @x: int for examle
 * @y: int for example
 *
 * Description: prints numberz
 * Return: value of x by y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
		if (y == 0)
		{
			return (1);
		}
		return (_pow_recursion(x, y - 1) * x);
}
