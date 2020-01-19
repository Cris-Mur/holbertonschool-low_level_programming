#include "hash_tables.h"

/**
 * hash_table_create - function that allocate a hash table
 * @size: size of the table
 * Return: hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *tablita;
	size_t index;

	tablita = NULL;

	if (size > 0)
	{
		tablita = malloc(sizeof(hash_table_t));
		if (!tablita)
			return (NULL);

		tablita->array = malloc(size * sizeof(hash_node_t *));
		if (!tablita->array)
		{
			free(tablita);
			return (NULL);
		}
		for (index = 0; index < size; index++)
		{
			tablita->array[index] = NULL;
		}

		tablita->size = size;

		return (tablita);
	}
	return (NULL);
}
