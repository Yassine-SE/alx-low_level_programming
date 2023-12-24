#include "./hash_tables.h"

/**
 * hash_table_print - function
 * @ht: param
 *
 * Return: 0 success
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node;
	unsigned char comma_flag;
	unsigned long int i;

	if (!ht)
		return;

	printf("{");
     comma_flag = 0;
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i])
		{
			if (comma_flag == 1)
				printf(", ");

			node = ht->array[i];
			while (node)
			{
				printf("'%s': '%s'", node->key, node->value);
				node = node->next;
				if (node)
					printf(", ");
			}
			comma_flag = 1;
		}
	}
	printf("}\n");
}
