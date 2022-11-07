#include <unistd.h>
#include <stdarg.h>
#include <stdio.h>
int _putchar(char c);

int _printchar(char *c)	
{

va_list arg;

va_arg(arg, char*);	
return _putchar(*c);
       	
}


int _printstr(char *s)	
{


va_list arg;
int i;
	 va_arg(arg, char *); 

	
	i = 0;

	
	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}
	return (i);




}

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
