#include "holberton.h"

int aux(int n, int i);

/**
 *_sqrt_recursion -  returns the natural square root of a number.
 * @n: int received
 * Return: balnk
 */

int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	else if (n == 1)
		return (1);
	else if (n < 0)
		return (-1);
	else
		return (aux(n, 1));
}

/**
 *  aux - if a natural square
 * @n: number received
 * @i: incrementor received
 * Return: -1;
 */

int aux(int n, int i)
{
	if (n == (i * i))
		return (i);
	else if (n > (i * i))
		return (aux(n, i + 1));
	else
		return (-1);
}
