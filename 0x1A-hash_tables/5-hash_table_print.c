#include "hash_tables.h"

/**
 * hash_table_print - function that print a hash table
 * @ht: input hash table
 * Return: void function
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *row = NULL;
	char *list = NULL;
	size_t idx = 0;

	if (ht)
	{
		printf("{");
		while (idx <= ht->size)
		{
			if (row &&
			    idx < ht->size &&
			    idx != 0 &&
			    ht->array[idx + 1])
			{
				printf(", ");
			}
			row = ht->array[idx];
			if (row)
			{
				list = hash_table_get(ht, row->key);
				printf("\'%s\': \'%s\'",
				       ht->array[idx]->key, list);
			}
			idx++;
		}
		printf("}\n");
	}
}
