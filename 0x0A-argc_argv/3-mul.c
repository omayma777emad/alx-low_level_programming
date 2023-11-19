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
	int i;

	if (argc == 3)
	{
		i = argv[1] * argv[2];
		printf("%d", i);
	}
	else
	{
		printf("error");
		return (1);
	}
}
