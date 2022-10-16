/**
 * factorial - returns the factorial of a number
 * @n: int for example
 *
 * Description: prints numberz
 * Return: value 0 (success)
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	if (n > 0)
	{
		return (n * factorial(n - 1));
	}
	else
	{
		return (1);
	}

}
