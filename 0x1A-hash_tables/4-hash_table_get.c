#include "hash_tables.h"

/**
 * hash_table_get - function that retrieves a value associated with a key
 * @ht: input hash table
 * @key: is the key you are looking for
 * Return: Value associated with the element, or NULL if key not found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index = 0;

	if (ht)
	{
		if (key)
		{
			index = key_index((const unsigned char *)key, ht->size);
			if (ht->array[index])
				return (ht->array[index]->value);
			else
				return (NULL);
		}
	}
	return (NULL);
}
