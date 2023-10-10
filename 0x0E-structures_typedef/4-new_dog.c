#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - function
 * @str: param
 *
 * Return: 0 success
 */
int _strlen(char *str)
{
	int i = 0;

	while (str[i] != '\0')
		i++;

	return (i);
}

/**
 * _strcpy - function
 * @dest: param
 * @src: param
 *
 * Return: 0 success
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';

	return (dest);
}

/**
 * new_dog - function
 * @name: param
 * @age: param
 * @owner: param
 *
 * Return: 0 success
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new;
	int name_len;
	int owner_len;

	name_len = _strlen(name);
	owner_len = _strlen(owner);
	new = malloc(sizeof(dog_t));
	if (!new)
		return (NULL);

	new->name = malloc(sizeof(new->name) * (name_len + 1));
	if (!new->name)
	{
		free(new);
		return (NULL);
	}

	new->owner = malloc(sizeof(new->owner) * (owner_len + 1));
	if (!new->owner)
	{
		free(new);
		free(new->name);
		return (NULL);
	}

	_strcpy(new->name, name);
	_strcpy(new->owner, owner);
	new->age = age;

	return (new);
}
