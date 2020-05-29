#include "hash_tables.h"

/**
 * hash_table_get - function that retrieves a value associated with a key
 * @ht: input hash table
 * @key: is the key you are looking for
 * Return: Value associated with the element, or NULL if key not found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *row = NULL;
	/*char *str = NULL;me sobra esto*/
	unsigned long int index = 0;

	if (ht)
	{
		index = key_index((const unsigned char *)key, ht->size);
		/*str = strdup(key);me sobra esto*/

		if (ht->array[index])
		{
			row = ht->array[index];
			while (row)
			{
				if (strcmp(row->key, key) == 0)
					break;
				row = row->next;
			}
			/*free(str);me sobra esto*/

			if (!row)
			{
				return (NULL);
			}
			return (row->value);
		}
	}
	return (NULL);
}
