#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
int _putchar(char c);
int _printf(const char *format, ...)
{

	int i;



	va_list str;
	va_start(str, *format);
	
	for (i = 0; format[i]; i++)
			;
	if (format[i] != '%') 
	{
		va_arg(str, int);
		_putchar(format[i]);
	}
		if(format[i] == '%' && format[i] != 's')
	{
		
		
	
		
	

		 
	}

	if (format[i + 1] == '%')
	{
		_putchar('%');
		i++;					


	}
	


		
return i;




	
	 




}

int main()
{

char c = c;


	_printf("print a string\n");
	_printf("string: %s\n", "Hello world");
	_printf("%c\n", c);
	_printf("%%");
	printf("prueba jeje % wkjdkjasdkj");




	return 0;


}
