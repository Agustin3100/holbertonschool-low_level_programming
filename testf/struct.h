#ifndef struct_h
#define struct_h
int _printf(const char *format, ...);
int _printchar(char *c);
int (*funcs_op(const char *s))(char *);
int _printstr(char *c);
typedef struct arg
{
	char *arg;
	int (*f)(char *b);


} str_t;
#endif
