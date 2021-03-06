#include "hash_tables.h"

/**
 * hash_table_get - retrieves values associated w/key
 * @ht: pointer to hashtable
 * @key: pointer to key value
 * Return: value associated w/element or NULL if key not found
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	char *dup;
	unsigned int idx = 0;
	hash_node_t *node;

	if (ht == NULL)
		return (NULL);
	dup = _strdup(key);
	node = ht->array[idx];
	while (node != NULL)
	{
		if (strcmp(node->key, dup) == 0)
			break;
		node = node->next;
	}
	free(dup);
	if (node == NULL)
		return (NULL);

	char *val = node->value;

	return (val);
}
