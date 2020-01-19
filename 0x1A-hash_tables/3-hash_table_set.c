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
	hash_node_t *new_node = NULL, *tmp = NULL;
	unsigned long int itr;

	if (ht == NULL || key == NULL)
		return (0);

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);

	new_node->key = (char *)key;
	new_node->value = strdup(value);
	itr = key_index((const unsigned char *)key, ht->size);
	if (ht->array[itr] == NULL)
	{
		new_node->next = NULL;
		ht->array[itr] = new_node;
	}
	else
	{
		tmp = ht->array[itr];
		tmp->next = ht->array[itr];
		tmp = new_node;
		ht->array[itr] = tmp;
	}
	if (ht->array[itr] == NULL)
	{
		free(new_node->value);
		free(new_node);
	}
	return (1);
}
