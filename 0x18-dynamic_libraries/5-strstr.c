#include "holberton.h"

/**
 *_strstr - find a string in another string
 *@haystack: pointer to array to be searched
 *@needle: pointer to array to search for
 *Return: return pointer to location of string
 */

char *_strstr(char *haystack, char *needle)
{

while (*haystack != '\0')
{

char *b = haystack;
char *p = needle;
while (*p == *haystack && *p != '\0' && *haystack != '\0')
{
haystack++;
p++;
}

if (*p == '\0')
return (b);

haystack = b + 1;
}
return (0);
}
