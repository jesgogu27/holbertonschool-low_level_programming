#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 **add_nodeint_end -  adds a new node at the end  of a list.
 *@head: struct that content data.
 *@n: size of the list.
 *Return: the address of the new element or null.
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *p;
listint_t *new;

p = *head;

new = malloc(sizeof(listint_t));
if (new == NULL)
return (0);

new->n = n;
new->next = NULL;
if (*head == NULL)
{
*head = new;
return (new);
}
while (p->next != NULL)
{
p = p->next;
}
p->next = new;
return (new);
}
