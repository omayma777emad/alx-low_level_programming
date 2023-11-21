#include "main.h"

/**
 * create_array - array of charecters
 * @size : size of array
 * @specificChar: char to initialize
 * Return: char
*/

char *create_array(int size, char specificChar)
{
	if (size == 0)
	{
		return (NULL);
	}
	char *array = (char *)malloc(size * sizeof(char));

	if (array == NULL)
	{
		return (NULL);
	}
	for (int i = 0; i < size; i++)
	{
		array[i] = specificChar;
	}
	return (array);
}
