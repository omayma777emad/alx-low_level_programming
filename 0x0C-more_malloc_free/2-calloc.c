#include<stdio.h>
#include<stdlib.h>
#include"main.h"

/**
 * *_memset - fill memory with conest byte
 * @s: pointer
 * @b: constant
 * @n: max byte
 * Return: s
*/

char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = s;

	while (n--)
		*s++ = b;

	return (ptr);
}

/**
 * *_calloc - allocate memory for an array
 * @nm: array length
 * @size: size of each element
 * Return: pointer
*/

void *_calloc(unsigned int nm, unsigned int size)
{
	void *m;

	if (size == 0 || nm == 0)
		return (NULL);
	m = malloc(sizeof(int) * nm);

	if (m == 0)
		return (NULL);

	_memset(m, 0, sizeof(int) * nm);

	return (m);
}

