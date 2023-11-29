#include"FUNCTION_POINTERS_H"

/**
 * array_iterator - map an array
 * @array: int array
 * @size: array size
 * @action: funcyion pointer
 * Return: void
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i = array + size - 1;

	if (array && size && action)
		while (array <= i)
			action(*array++);
}
