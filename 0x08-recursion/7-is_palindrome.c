#include "holberton.h"
#include <stdio.h>

int _palindrome(char *s, int len);
int is_palindrome(char *s);
/**
 *_strlen_recursion - returns str length
 * @s: string to calculate length
 * Return: strlen
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	s++;
	return (1 + _strlen_recursion(s));
}

/**
 * is_palindrome - blank
 * @s: string
 * Return: blank
 */

int is_palindrome(char *s)
{
	int len;

	len = _strlen_recursion(s);
	if (len <= 1)
		return (1);
	return (_palindrome(s, len));
}

/**
 *_palindrome - balnk
 * @s: string
 * @len: length
 * Return: string
 */

int _palindrome(char *s, int len)
{
	if (len <= 1)
		return (1);
	else if (*s == *(s + len - 1))
	{
		return (_palindrome(s + 1, len - 2));
	}
	else
		return (0);

}
