#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include "main.h"
ssize_t read_textfile(const char *filename, size_t letters)
{
	
	
	char *buf = malloc(letters);
	int fd,wr,rd;

	fd = open(filename, O_RDONLY);
	

	
	 rd = read(fd,buf,letters);
	
	wr = write(STDOUT_FILENO,buf,rd);
	
	close(fd);
	
	
	return (wr);
}
