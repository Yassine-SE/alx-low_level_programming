#include "stdio.h"
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

	if (name)
		printf("Name: %s\n", name);
	else
		printf("Name: (nil)\n");

	if (age)
		printf("Age: %f\n", age);
	else
		printf("Age: (nil)\n");

	if (owner)
		printf("Owner: %s\n", owner);
	else
		printf("Owner: (nil)\n");
}
