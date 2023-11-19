#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - entry point add list of integers
 * @argc: int
 * @argv: list
 * Return: int
*/

int main(int argc, char *argv[])
{
	int sum = 0;
	int i, j;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		char *num = argv[i];

		for (j = 0; num[j] != '\0'; j++)
		{
			if (!isdigit(num[j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(num);
	}
	printf("%d\n", sum);
	return (0);
}
