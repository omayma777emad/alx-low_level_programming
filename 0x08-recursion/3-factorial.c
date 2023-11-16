#include"main.h"

/**
 * factorial - function that print the factorial for agiven number
 * @n: integer number
 * Return: int
*/

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
