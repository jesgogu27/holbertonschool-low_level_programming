#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 *listint_len - count and prints the elements of a list.
 *@h: struct that content data.
 *Return: the number of nodes
*/

size_t listint_len(const listint_t *h)
{
int i = 0;

while (h)
{
h = h->next;
i++;
}
return (i);
}
