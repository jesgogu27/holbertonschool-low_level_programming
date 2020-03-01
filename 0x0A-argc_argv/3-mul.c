#include <stdlib.h>
#include <stdio.h>

/**
 *main - received two parameters
 *@argc: count.
 *@argv: vector.
 *Return: always 0.
 */

int main(int argc, char *argv[])
{

int i, r;

if (argc > 1)
{
for (i = 1; i < argc; i++)
{
r = atoi(argv[i]) * atoi(argv[i - 1]);
}
printf("%d\n", r);
}
else
{
printf("Error \n");
}
return (0);
}
