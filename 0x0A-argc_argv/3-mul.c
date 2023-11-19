#include<stdio.h>
#include<stdlib.h>

/**
 * main - entey point print multiplication of two integers
 * @argc: int
 * @argv: list
 * Return: int
*/

int main(int argc, char *argv[])
{
	int i = atoi(argv[1]);
	int j = atoi(argv[2]);
	int r = i * j;

	if (argc != 3)
	{
		printf("Error\n");
	return (1);
	}
	printf("%d\n", r);
	return (0);
}
