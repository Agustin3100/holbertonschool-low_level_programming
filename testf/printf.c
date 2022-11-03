#include "main.h"
#include <stdarg.h>
int _putchar(char c);
int _printf(const char *format, ...)
{

int i, cnt;

va_list str;


va_start(str, *format);




	
		for (i = 0; format[i] != '\0'; i++)
		{

	if (format[i] != '%')
	{
			
	
				
 		va_arg(str, int);
		_putchar(format[i]);

			
	
	}


	if (format[i] == '%' && format[i] == 's')
	{
		
			va_arg(str, int);
			_putchar(format[i]);
		


	}


	
	 
	
	else if (format[i + 1] == '%')
	{
		cnt += _putchar('%');
		i++;
	}
		
		
		
		}	


	
	
	
	if (format[i] == '%' && format[i] == 'c')	
	{
		
		
				
			va_arg(str, int);
			_putchar(*format);
		

	}
	return i;

		
	
	
	
	
va_end(str);

return i;



}

int main()
{

char c = c;


	_printf("print a string\n");
	_printf("string: %s\n", "Hello world");
	_printf("%c\n", c);
	_printf("%%");



	return 0;

}
