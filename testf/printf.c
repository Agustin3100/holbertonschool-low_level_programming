#include <stdarg.h>
#include <unistd.h>
int _putchar(char c);
int _printchar(const char *c);
int _printstr(const char *s);
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
		

	if(format[i] == '%')
	{
		
		
		i++;
		va_arg(str, int);
		_printchar(format);

		 
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




	return 0;


}


int _printchar(const char *c)
{

va_list arg;

va_arg(arg, const char*);
return _putchar(*c);

}

int _printstr(const char *s)
{

int i;
va_list arg;

         va_arg(arg, const char *);
        

	i = 0;


        while (s[i] != '\0')
        {
                _putchar(s[i]);
                i++;
        }
        return (i);




}
int _putchar(char c)
{
	return (write(1, &c, 1));
}

