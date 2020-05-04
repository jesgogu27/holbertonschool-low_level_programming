#include "holberton.h"

/**
 *_strncat - concatent a string
 *@dest: string 1
 *@src: strin 2 a concatent
 *@n: maximum number of characters to be appened
 *Return: a char
 */

char *_strncat(char *dest, char *src, int n)
{
	int tamH, tamW, i;

	tamH = _strlen(dest);
	tamW = _strlen(src);

	for (i = 0; i <= tamW && src != 0; i++)
	{
		if (i < n)
		{
			dest[tamH + i] =  src[i];
		}
	}
	return (dest);
}

