#include "hash_tables.h"

/**
 * hash_table_create - function that allocate a hash table
 * @size: size of the array of arrays
 * Return: hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *tablita;

	if (size < 0)
	{
		return (NULL);
	}

	tablita = malloc(sizeof(hash_table_t));
	if (!tablita)
	{
		return (NULL);
	}

	tablita->array = (hash_node_t**)calloc(size, size * sizeof(hash_node_t));
	if (!tablita->array)
	{
		return (NULL);
	}
}
