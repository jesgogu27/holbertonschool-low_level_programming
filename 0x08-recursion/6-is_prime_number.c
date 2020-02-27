#include "holberton.h"

int _prime(int n, int i, int t);
/**
 * is_prime_number - print the prime number
 * @n: number
 * Return: prime number
 */

int is_prime_number(int n)
{
return (_prime(n, 2, n / 2));
}

/**
 *  _prime - operation function
 * @n: number received
 * @i: cont
 * @t: terminate
 * Return: operation
 */

int _prime(int n, int i, int t)
{
if ((n % i == 0 && i <= t) || n < 0 || n == 1)
return (0);
else if (n % i != 0 && i <= t)
return (_prime(n, i + 1, t));
else
return (1);
}
