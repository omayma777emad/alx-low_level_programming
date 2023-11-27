#include"dog.h"
#include<stdlib.h>

/**
 * free_dog - free the dog struct
 * Return: void
 * @d: struct member
*/

void free_dog(dog_t *d)
{
	if (d)
		free(d);
}
