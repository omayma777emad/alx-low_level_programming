#include"dog.h"
#include<dtdio.h>

dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog_t *n;
	if (n)
	{
		n->name = name;
		n->age = age;
		n->owner = owner;
	}
}
