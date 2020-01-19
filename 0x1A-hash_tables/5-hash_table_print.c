#include "hash_tables.h"

/**
 * hash_table_print - function that print a hash table
 * @ht: input hash table
 * Return: void function
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *row = NULL;
	char *nodito = NULL;
	size_t idx = 0;
	int first = 0;

	if (ht)
	{
		printf("{");
		while (idx <= ht->size)
		{
			row = ht->array[idx];
			if (row)
			{
				if (first)
					printf(", ");
				nodito = hash_table_get(ht, row->key);
				printf("\'%s\': \'%s\'",
				       ht->array[idx]->key, nodito);
				first = 1;
			}
			idx++;
		}
		printf("}\n");
	}
}
