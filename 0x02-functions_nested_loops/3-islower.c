#include"main.h"

/**
 * _islower - function that chech lower case of character
 * Return: int
 * @c: charcter
*/

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
