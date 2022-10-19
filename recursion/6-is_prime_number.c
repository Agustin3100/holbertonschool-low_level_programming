/**
 * aux_funq - auxiliar function
 * @x: number for example
 * @y: given number
 *
 * Description: prints numberz
 * Return: value 0 (success)
 */
int aux_funq(int x, int y)
{
	if (x == y)
	{
		return (1);
	}
	if (x % y == 0)
	{
		return (0);
	}
	return (numero_primo(x, y + 1));

}

/**
 * is_prime_number - returns 1 if given number is prime
 * @n: int for example
 * Return: value 0 (success)
 */


int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (numero_primo(n, 2));
}
