#include"main.h"

void _puts_recursion(char *s)
{
	if (*s == '\o')
	{
		_putchar('\n');
	}
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
