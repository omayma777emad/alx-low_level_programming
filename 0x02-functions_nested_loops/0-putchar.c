#include "main.h"

/**
 * main - entry point
 *
 * description:using _putchar
 *
 * return : always (0) success
*/

int main(void)
{
	char st[] = "_putchar";
	int c;

	for (c = 0; c < 8; c++)
		_putchar(st[c]);
	_putchar('\n)';

	return (0);

}
