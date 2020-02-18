#include "holberton.h"

/**
 *swap_int - swaps the values of two iintegers
 *@a: int pointer
 *@b: int pointer
 *Return: always 0
 */

void swap_int(int *a, int *b)
{
int z;

z = *a;
*a = *b;
*b = z;
}
