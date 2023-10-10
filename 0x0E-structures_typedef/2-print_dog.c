#include <stdio.h>
#include "dog.h"

/**
 * print_dog - function
 * @d:param
*/
void print_dog(struct dog *d)
{
	char *name = d->name;
	float age = d->age;
	char *owner = d->owner;

	if (!d)
		return;

	if (!name)
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", name);

	if (!age)
		printf("Age: (nil)\n");
	else
		printf("Age: %f\n", age);

	if (!owner)
		printf("Owner: (nil)\n");
	else
		printf("Owner: %s\n", owner);
}
