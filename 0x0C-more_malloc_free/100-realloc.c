#include <stdlib.h>
#include <string.h>

/**
 * *_realloc - function yhar reallocate the memory
 * @old_size: int
 * @new_size: int
 * @ptr: pointer
 * Return: pointer
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		return (malloc(new_size));
	}
	if (new_size == old_size)
	{
		return (ptr);
	}
	void *new_ptr = malloc(new_size);

	if (new_ptr == NULL)
	{
		return (NULL);
	}
	unsigned int copy_size = old_size < new_size ? old_size : new_size;

	memcpy(new_ptr, ptr, copy_size);

	free(ptr);
	return (new_ptr);
}