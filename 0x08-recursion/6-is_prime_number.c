#include"main.h"

/**
 * is_prime_number - function that print a prime number
 * @n: integer number
 * @o: integer number
 * Return: int
*/

int check_prime(int n, int o);
int is_prime_number(int n)
{
	return (check_prime(n, 2));
}
/**
 * check_prime - function that return a prime number
 * @n: integer number
 * @o: integer number
 * Return: int
*/

int check_prime(int n, int o)
{
	if (o >= n && n > 1)
		return (1);
	if (n % o == 0 || n <= 1)
		return (0);
	else
		return (check_prime(n, o + 1));
}
