#include <stdlib.h>
#include <string.h>

/**
 *_strdup - function returns a pointer to a new string
 * which is a duplicate of the string str
 * @str: string
 * Return: 0
*/

char *_strdup(char *str)
{
	char *duplicate = malloc(strlen(str) + 1);

	if (str == NULL)
	{
		return (NULL);
	}
	if (duplicate == 0)
	{
		return (NULL);
	}
	strcpy(duplicate, str);
	return (duplicate);
}
