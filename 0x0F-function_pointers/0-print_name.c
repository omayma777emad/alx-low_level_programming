#include"function_pointers.h"

/**
 * print_name - function that print given name
 * @name: string
 * @f: print function pointer
*/

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
