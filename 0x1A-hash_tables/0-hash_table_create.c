#include "hash_tables.h"

/**
 * hash_table_create - function that allocate a new tash table
 * @size: size of the table
 * Return: new hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *tablita = NULL;
	unsigned long int index = 0;

	if (size == 0)
		return (NULL);

	tablita = malloc(sizeof(hash_table_t));
	if (!tablita)
		return (NULL);

	tablita->array = malloc(size * sizeof(hash_node_t *));
	if (!tablita->array)
	{
		free(tablita);
		return (NULL);
	}
	tablita->size = size;
	for (index = 0; index < size; index++)
		tablita->array[index] = NULL;
	return (tablita);
}
