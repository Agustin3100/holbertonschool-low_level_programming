#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include "main.h"
/**
 * read_textfile - reads a file and prints its content to stdout
 * @filename: path name to the requested file
 * @letters: total letters on the file
 *
 * Description: updates value of pointer
 * Return: the actual number of letters it could read or print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf = malloc(letters);
	int fd, wr, rd;

	fd = open(filename, O_RDONLY);

	if (fd == -1)
	{
		return (0);
	}

	rd = read(fd, buf, letters);

	wr = write(STDOUT_FILENO, buf, rd);

	close(fd);

	return (wr);
}
