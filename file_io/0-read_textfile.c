#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;

	fd = open("filename", O_RDWR, 0600);

	write(fd,filename,letters);

	return fd;




}
