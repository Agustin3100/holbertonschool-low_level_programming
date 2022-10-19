/**
 * main - main function
 * @argc: default int
 * @argv: default array
 *
 * Description: prints numberz
 * Return: value 0 (success)
 */
#include <stdio.h>
int main(int argc, char *argv[])
{
	(void) argc;

	while (*argv)
	{
		printf("%s\n", *argv);
		argv++;
	}

	return (0);
}
