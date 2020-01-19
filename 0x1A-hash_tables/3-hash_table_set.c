#include "hash_tables.h"

/**
 * hash_table_set - function that push new element to the table
 * @ht: input hash table
 * @key: key of the node (can not be an empty string)
 * @value: value of the key
 * Return: updated table
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *element = NULL;
	hash_node_t *row = NULL;
	unsigned long int index = 0;

	if (ht)
	{
		if (key)
		{
			index = key_index((const unsigned char*)key, ht->size);
			element = malloc(sizeof(hash_node_t));
			if (!element)
			{
				return (0);
			}
			element->key = (char *)key;
			element->value = strdup(value);
			row = ht->array[index];
			if (row)
			{
				while (row)
				{
					if (strcmp(key, row->key) == 0)
					{
						break;
					}
					row = row->next;
				}
				if (row == NULL)
				{
					element->next = row;
					ht->array[index] = element;
					return (1);
				}
				else
				{
					free(row->value);
					row->value = strdup(element->value);
					free(element->value);
					free(element);
				}
			}
			else
			{
				element->next = NULL;
				ht->array[index] = element;
				return (1);
			}
		}
	}
	return (0);
}
