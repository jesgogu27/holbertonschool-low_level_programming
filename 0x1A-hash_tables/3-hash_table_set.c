#include "hash_tables.h"
/**
 * hash_table_set - adds an element to the hash table
 * @ht: the hash table you want to add or update the key/value to
 * @key: is the key
 * @value: the value associated with the key
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *node =  NULL, *newele = NULL;
	unsigned long int idx;

	if (ht == NULL || key == NULL || strlen(key) == 0)
		return (0);
	idx = key_index((unsigned char *)key, ht->size);
	node = ht->array[idx];

	while (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
		{
			free(node->value);
			node->value = strdup(value);
			if (node->value == NULL)
				return (0);
			return (1);
		}
		node = node->next;
	}
	newele = malloc(sizeof(hash_node_t));
	if (newele == NULL)
		return  (0);
	newele->key = strdup(key);
	if (newele->key == NULL)
		return (0);
	newele->value = strdup(value);
	if (newele->value == NULL)
	{
		free(newele->key);
		free(newele);
		return (0);
	}
	newele->next = ht->array[idx];
	ht->array[idx] = newele;
	return (1);
}
