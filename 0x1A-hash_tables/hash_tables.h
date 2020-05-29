#ifndef _HASH_TABLES_H_
#define _HASH_TABLES_H_

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
*struct hash_node - node of a hash table.
*@key: unique in the hash table.
*@value: value identificate by key.
*@next: pointer to the next node of the list.
*/

typedef struct hash_node
{
	char *key;
	char *value;
	struct has_node *next;
} hash_node_t;

/**
*struct hash_table - data structure of the hash table
*@size: size of array.
*@array: pointer to firts node of the linkend list
*/

typedef struct hash_table
{
	unsigned long int size;
	hash_node_t **array;
} hash_table_t;

hash_table_t *hash_table_create(unsigned long int size);
unsigned long int hash_djb2(const unsigned char *str);
unsigned long int key_index(const unsigned char *key, unsigned long int size);

#endif
