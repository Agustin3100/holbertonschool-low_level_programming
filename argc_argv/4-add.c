/**
 * main - main function
 * @argc: default int
 * @argv: default array
 *
 * Description: prints numberz
 * Return: value 0 (success)
 */
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
	int i;
	int j;
	int result = 0;

	for (i = 0; i < argc; i++)
{
	for (j = 1; *(argv[i] + j) != '\0'; j++)
	{
		if (*(argv[i] + j) >= 'A' && (*(argv[i] + j) <= 'z'))
		{
			printf("Error\n");
			return (1);
		}
	}
	result = result + strtol(argv[i], NULL, 10);
}
	printf("%d\n", result);
	return (0);
}
