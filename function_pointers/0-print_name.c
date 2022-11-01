/**
 *print_name - liberates the poor dog
 *@name: name for example
 *@f: function pointer in parameter
 *Return: vodi
 **/
void print_name(char *name, void (*f)(char *))
{

	if (name != NULL && f != NULL)
	(*f)(name);

}
