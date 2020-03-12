#include <stdio.h>
#include "function_pointers.h"

/**
 *int_index - prints numbers.
 *@array: get array.
 *@size: size of array.
 *@cmp: call funtion.
 *Return: int.
 */


int int_index(int *array, int size, int (*cmp)(int))
{

int (*p)(int);
int i, r;


if (size <= 0)
{
return (-1);
}

if ((cmp == NULL) || (array == NULL))
{
return (-1);
}

p = cmp;
i = 0;
while (i < size)
{
r = p(array[i]);
if (r != 0)
{
return (i);
}
i++;
}
return (-1);
}
