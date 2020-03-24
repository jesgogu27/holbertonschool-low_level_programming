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

listint_t *nuevo;

nuevo = malloc(sizeof(listint_t));

if (nuevo != NULL)
{
nuevo->n = n;
nuevo->next = *head;
*head = nuevo;
return (nuevo);
}
else
{
return (0);
}
}
