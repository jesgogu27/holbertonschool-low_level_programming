#include "hash_tables.h"
/**
 * hash_table_get - get a value associated with a key
 * @ht: the hash table
 * @key: key to looking
 * Return: the value associated or NULL
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	int idx;
	hash_node_t *node;

	if (!ht || !key)
		return (NULL);
	idx = key_index((unsigned char *)key, ht->size);
	node = ht->array[idx];

	if (ht->array[idx] == NULL)
		return (NULL);

	while (node)
	{
		if (strcmp(node->key, key) == 0)
			return (node->value);
		node = node->next;
	}
	return (NULL);
}
