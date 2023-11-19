#include"main.h"
#include<stdio.h>

/**
 * main - entey point print multiplication of two integers
 * @argc: int
 * @argv: list
 * Return: int
*/

int main(int argc, char *argv[])
{
	int i = 0, j = 0;

	if (argc == 3)
	{
		i = atoi(argv[1);
		j = atoi(argv[2]);

		printf("%d\n", i * j);
	}
	else
	{
		printf("error\n");
		return (1);
	}
	return (0);
}
