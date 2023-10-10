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
		d->name = "(nil)";
	printf("Name: %s\n", name);

	if (!age)
		printf("Age: (nil)\n");
	else
		printf("Age: %f\n", age);

	if (!owner)
		d->owner = "(nil)";
	printf("Owner: %s\n", owner);
}
