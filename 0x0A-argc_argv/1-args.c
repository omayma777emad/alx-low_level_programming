#include<stdio.h>

/**
 * main - entry point
 * @i: integer number
 * @argc: int
 * @argv: list
 * #i: int
 * Return: int
*/

int main(int argc, char *argv[])
{
	int i;

	printf("%d\n", argc);
	for  (i = 1; i < argc; i++)
	{
		printf("%s", argv[i]);
	}
	return (0);
}
