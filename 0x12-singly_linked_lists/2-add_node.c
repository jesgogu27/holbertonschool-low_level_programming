#include "lists.h"
#include <string.h>
/**
 * add_node - add a new node
 * @head: double pointer to head
 * @str: string to be saved in new node, must be duplicated
 * Return: Address of new element or NULL if failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	int count = 0;

	while (str[count] != '\0')
	{
		count++;
	}
	if (str == NULL)
	{
		return (0);
	}
	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (0);
	}
	new->str = strdup(str);
	new->len = count;
	new->next = *head;
	*head = new;

	return (new);
}
