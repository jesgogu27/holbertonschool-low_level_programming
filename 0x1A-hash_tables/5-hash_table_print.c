#include "hash_tables.h"
/**
 * hash_table_print - prints a hash table
 * @ht: the hash table
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node;
	char *sep = "";

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		if (node != NULL)
		{
			while (node != NULL)
			{
				printf("%s", sep);
				printf("'%s': '%s'", node->key, node->value);
				sep = ", ";
				node = node->next;
			}
		}
	}
	printf("}\n");
}