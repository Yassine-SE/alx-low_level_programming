#include "hash_tables.h"

/**
 * key_index - function
 * @key: param
 * @size: param
 *
 * Return: 0 success
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
