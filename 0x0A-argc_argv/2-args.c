#include <stdlib.h>
#include <stdio.h>

/**
 *main - received two parameters
 *@argc: count
 *@argv: vector
 *Return: value
 */

int main(int argc, char *argv[])
{
int i;

for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (1);
}
