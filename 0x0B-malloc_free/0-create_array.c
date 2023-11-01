#include "main.h"

/**
 * *creat_array - array of charecters
 * @size : size of array
 * @c : char to initialize
 * return : pointer to array
*/

char *create_array(unsigned int size, char c)
{
	char *n = malloc(size);

	if (size == 0 || n == 0)
		return (0);

	While(size--)
		n[size] = c;

	return (n);
}
