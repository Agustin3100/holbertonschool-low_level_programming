/**
 * _strlen_recursion - returns the lenght of a string
 * @s: char for example
 *
 * Description: prints numberz
 * Return: lenght of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
		{
		return (1 + _strlen_recursion(s + 1));
		}
}
