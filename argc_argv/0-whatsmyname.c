/**
 * main - prints the name of an archive
 * @argc: void
 * @argv: name of the archive
 *
 * Description: updates value of pointer
 * Return: value 0 (success)
 */
#include "main.h"
#include <stdio.h>
int main(int argc, char *argv[])
{
	(void) argc;

	printf("%s\n", argv[0]);
	return (0);
}
