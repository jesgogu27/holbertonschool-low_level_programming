#include "lists.h"

/**
 * free_listint2 - free a `listint_t` list
 * @head: double pointer to head
 */
void free_listint2(listint_t **head)
{
listint_t *list;


if (!head || !(*head))
return;

while (*head)
{
list = *head;
*head = (*head)->next;
free(list);
}
*head = NULL;
}
