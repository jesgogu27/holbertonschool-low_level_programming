#include "holberton.h"

int _strlen(char *s);

/**
 *str_concat -  concatens
 *@s1: string 1
 *@s2: string 2
 *Return: string S3
 */


char *str_concat(char *s1, char *s2)
{
	char *s3;
	int ts3, i, x, y;
	int u, o;

	i = 0;

	if (s1 == NULL)
		return (NULL);

	if (s2 == NULL)
		return (NULL);

	u = _strlen(s1);
	o = _strlen(s2);

	ts3 = u + o;

	s3 = malloc(ts3);

	if (s3 == NULL)
		return (NULL);

	for (x = 0; x < u; x++)
	{
		s3[i] = s1[x];
		i++;
	}

	for (y = 0; y < o; y++)
	{
		s3[i] = s2[y];
		i++;
	}

	s3[i + 1] = '\0';

	return (s3);
}


/**
 *_strlen - returns the length of a string
 *@s: string received
 *
 *Return: the length of a string
 */

int _strlen(char *s)
{

	int x;

	x = 0;

	while (*s != '\0')
	{
		s++;
		x++;
	}
	return (x);
}
