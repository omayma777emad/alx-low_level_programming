#include<stdio.h>
#include"dog.h"

/**
 * print_dog - print the struct
 * @d: member of struct
 * Return: void
*/

void print_dog(struct dog *d)
{
	if (d)
	{
		printf("%s", d->name ? d->name : "(nil)");
		printf("%f", d->age);
		printf("%s",d->owner ? d->owner : "(nil)");
	}
}

