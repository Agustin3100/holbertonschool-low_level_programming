/**
 * _strcmp - compare a string
 * @s1: pointer for example
 * @s2: pointer for example
 *
 * Description: compares two strings
 * Return: value 0 (success)
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] == s2[i] && s1[i] == '\0'; i++)
		;
	return (s1[i] - s2[i]);
}
