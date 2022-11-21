#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include "main.h"
ssize_t read_textfile(const char *filename, size_t letters)
{
	
	
	char *buf = malloc(sizeof(letters));
	int fd;

	fd = open(filename, O_RDWR | O_RDONLY | O_WRONLY);

	

	write(fd,filename,letters);

	read(letters,buf,letters);
	
	close(fd);

	return letters;




}
