#include"main.h"
#include<stdio.h>
#include<stdlib.h>

/**
 * array_range - creat an array of integers
 * @min: starting integer
 * @max: max int
 * Return: array of integers
*/

int *array_range(int min, int max)
{
	int len, i;
	int ptr;

	if (min > max)
		return (NULL);
	len = max - min + 1;
	ptr = mallic(sizeof(int) * len);
	if (!ptr)
		return (NULL);
	for (i = 0; i < len; i++)
		ptr[i] = min++;
	return (ptr);
}

