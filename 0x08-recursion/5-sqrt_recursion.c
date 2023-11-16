#include"main.h"

/**
 * _sqrt_recursion - function print the squrt of a nuber
 * @n: integer number
 * @v: integer number
 * Return: int
*/

int square(int n, int v);
int _sqrt_recursion(int n)
{
	return (square(n, 1));
}

/**
 * square - function return the square root of a number
 * @v: integer number
 * @n: integer number
 * Return: int
*/

int square(int n, int v)
{
	if (v * v == n)
		return (v);
	else if (v * v < n)
		return (square(n, v + 1));
	else
		return (-1);
}
