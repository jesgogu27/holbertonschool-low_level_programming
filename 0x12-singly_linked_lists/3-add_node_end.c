#include "lists.h"
#include <string.h>
/**
 * add_node_end - add a new node at the end of `list_t` list
 * @head: double pointer to head
 * @str: string to duplicate into new node
 * Return: Address of the new element or NULL if failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *nuevo;
	list_t *actual;
	int x;

	if (str == NULL)
		return (NULL);

	nuevo = malloc(sizeof(list_t));

	if (nuevo == NULL)
		return (0);

	nuevo->str = strdup(str);
	if (nuevo->str == NULL)
	{
		free(nuevo);
		return (NULL);
	}

	for (x = 0; str[x] != '\0'; x++)
		continue;

	nuevo->len = x;
	nuevo->next = NULL;

	if (*head == NULL)
	{
		*head = nuevo;
		return (nuevo);
	}

	actual = *head;

	while (actual->next != NULL)
	{
		actual = actual->next;
	}

	actual->next = nuevo;
	return (nuevo);
}
