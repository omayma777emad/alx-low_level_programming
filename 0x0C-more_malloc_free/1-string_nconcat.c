#include<stdio.h>
#include<stdlib.h>
#include"main.h"

/**
 * string_nconcat - concatenate two strigs
 * @s1: pointer to first string
 * @s2: pointer to 2nd string
 * @n: numbers of bytes
 * Return: pointer
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *t;
	unsigned int i, j, s1_len, s2_len;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (s1_len = 0; s1[s1_len] != '\0'; s1_len++)
		;
	for (s2_len = 0; s2[s2_len] != '\0'; s2_len++)
		;

	t = malloc(s1_len + n + 1);
	if (t == NULL)
	{
		return (NULL);
	}
	for (i = 0; s[i] != '\0'; i++)
		t[i] = s1[i];
	for (j = 0; j < n; j++)
	{
		t[i] = s2[i];
		i++;
	}
	t[i] = '\0';
	return (t);
}

