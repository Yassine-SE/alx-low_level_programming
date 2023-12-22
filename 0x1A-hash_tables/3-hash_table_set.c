#include "hash_tables.h"

/**
 * hash_table_set - function
 * @ht: param
 * @key: param
 * @value: param
 *
 * Return: 0 success
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *hash_t;
	unsigned long int idx, i;
	char *value_cpy;

	if (!ht || !key || *key == '\0' || !value)
		return (0);
	value_cpy = strdup(value);
	if (!value_cpy)
		return (0);

	idx = key_index((const unsigned char *)key, ht->size);
	for (i = idx; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = value_cpy;
			return (1);
		}
	}

	hash_t = malloc(sizeof(hash_node_t));
	if (!hash_t)
	{
		free(value_cpy);
		return (0);
	}

	hash_t->key = strdup(key);
	if (!hash_t->key)
	{
		free(hash_t);
		return (0);
	}
	hash_t->value = value_cpy;
	hash_t->next = ht->array[idx];
	ht->array[idx] = hash_t;

	return (1);
}
