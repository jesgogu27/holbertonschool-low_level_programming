#include <stdio.h>
#include "function_pointers.h"

/**
 *array_iterator - prints numbers.
 *@array: get array.
 *@size: size of array.
 *@action: call funtion.
 */


void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int i;

if ((array != NULL) && (action != NULL))
{
for (i = 0; i < size; i++)
{
action(array[i]);
}
}
}
