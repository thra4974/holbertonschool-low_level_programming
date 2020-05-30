#include "hash_tables.h"

/**
 * hash_table_create - creates a hash_table_t hash table
 * @size: size of array
 * Return: hash_table_t hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table;

	if (size < 1)
		return (NULL);
	hash_table = malloc(sizeof(hash_table_t));
	if (hash_table == NULL)
		return (NULL);
	hash_table->array = (hash_node_t **)malloc(size * sizeof(hash_node_t));
	if (hash_table->array == NULL)
		return (NULL);
	hash_table->size = size;
	return (hash_table);
}
