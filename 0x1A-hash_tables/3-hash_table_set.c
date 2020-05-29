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
	hash_node_t *element = NULL, *row = NULL;
	unsigned long int index = 0;

	if (ht && key && *key != '\0')
	{
		index = key_index((const unsigned char *)key, ht->size);
		element = malloc(sizeof(hash_node_t));
		if (!element)
			return (0);
		element->key = strdup(key);
		element->value = strdup(value);
		row = ht->array[index];
		if (row)
		{
			while (row)
			{
				if (strcmp(key, row->key) == 0)
				{
					same_key(element, row);
					return (1);
				}
				row = row->next;
			}
			if (row == NULL)
			{
				element->next = ht->array[index];
				ht->array[index] = element;
				return (1);
			}
		}
		else
		{
			element->next = NULL;
			ht->array[index] = element;
			return (1);
		}
	}
	return (0);
}

/**
 * same_key - function in case the key is same
 * @row: input row
 * @element: input element
 * Return: void function
 */

void same_key(hash_node_t *element, hash_node_t *row)
{
	free(row->value);
	row->value = strdup(element->value);
	free(element->value);
	free(element->key);
	free(element);
}
