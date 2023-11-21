#include <stdlib.h>
#include <string.h>

/**
 * str_concat - concatinate teo strings
 * @s1: string
 * @s2: string
 * Return: pointer
*/

char *str_concat(char *s1, char *s2)
{
	size_t s1_len = strlen(s1);
	size_t s2_len = strlen(s2);
	size_t concat_len = s1_len + s2_len + 1;
	char *result = malloc(concat_len);

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (result == NULL)
		return (NULL);
	memcpy(result, s1, s1_len);
	memcpy(result + s1_len, s2, s2_len);
	result[concat_len - 1] = '\0';
	return (result);
}
