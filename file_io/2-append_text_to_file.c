#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, len;

	len = strlen(text_content);
	
	fd = open(filename, O_WRONLY | O_APPEND);

	if(fd == -1)
	{
		return (-1);
	}

	
	
	write(STDOUT_FILENO,text_content,len);


	close(fd);
	
	return (1);



}
