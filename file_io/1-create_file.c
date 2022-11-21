#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include "main.h"
/**
 * create_file - function that creates a new file with text
 * @filename: the path name to the new file
 * @text_content: the contents of the file
 *
 * Description: updates value of pointer
 * Return: value 1 (success)
 */
int create_file(const char *filename, char *text_content)
{
	int _strlen(char *s);
	int fd, len, wr;

	len = _strlen(text_content);
	if (filename == NULL)
	{
		return (0);
	}

	fd = open(filename, O_CREAT | O_RDWR, 0600);

	if (fd == -1)
	{
		return (0);
	}
	wr = write(fd, text_content, len);
	if (wr == -1)
	{
		return (0);
	}
	if (text_content == NULL)
	{
		fd = open(filename, O_CREAT | O_RDWR, 0600);
	}
	return (1);
}


/**
 * _strlen - prints the lenght of a string
 * @s: char pointer for example
 *
 * Description: updates value of pointer
 * Return: lenght of the string
 */
int _strlen(char *s)
{
	int lt = 0;

	while (*s)
	{
		lt++;

		s = s + 1;
	}
	return (lt);
}
