#include <stdio.h>
#include "dog.h"

/**
 * new_dog - function
 * @name: param
 * @age: param
 * @owner: param
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *nv;
	
	nv->name = name;
	nv->age = age;
	nv->owner = owner;

	return (nv);
}
