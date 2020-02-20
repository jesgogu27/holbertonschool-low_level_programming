#include "holberton.h"

/**
 *reverse_array - print array inverse
 *@a: array received
 *@n: size of array
 *Return: inverse array
*/

void reverse_array(int *a, int n)
{
int i, v, j;
int aux[13];

j = 0;

for (i = n ; i > 0; i--)
{
v = a[i - 1];
aux[j] = v;
j++;
}

for (j = 0 ; j < n ; j++)
{
a[j] = aux[j];
}
}
