#include <stdarg.h>
#ifndef struct_h
#define struct_h
typedef struct argt
{
        char *arg;
        int (*f)(va_list dot);


} str_t;
int printper(va_list ap);
int  _printf(const char *format, ...);
int printstr(va_list ap);
int printchar(va_list ap);
#endif
