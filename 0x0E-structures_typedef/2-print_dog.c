#include <stdio.h>
#include "dog.h"

/**
 * print_dog - function
 * @d:param
*/
void print_dog(struct dog *d)
{
	if (!d)
		return;

	if (!d->name)
		d->name = "(nil)";
	printf("Name: %s\n", d->name);

	if (!d->age)
		printf("Age: (nil)\n");
	else
		printf("Age: %f\n", d->age);

	if (!d->owner)
		d->owner = "(nil)";
	printf("Owner: %s\n", d->owner);
}
