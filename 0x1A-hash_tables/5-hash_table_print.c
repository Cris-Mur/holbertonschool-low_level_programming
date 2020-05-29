#include "hash_tables.h"

/**
 * hash_table_print - function that print a hash table
 * @ht: input hash table
 * Return: void function
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *row = NULL;
	size_t idx = 0;
	int first = 0;

	if (!ht)
		return;

	if (ht)
	{
		printf("{");
		while (idx <= ht->size)
		{
			row = ht->array[idx];
			while (row)
			{
				if (first)
					printf(", ");
				printf("\'%s\': \'%s\'", row->key, row->value);
				row = row->next;
				first = 1;
			}
			idx++;
		}
		printf("}\n");
	}
}
