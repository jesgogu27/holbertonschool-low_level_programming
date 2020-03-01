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
if (*argv[i] >= 48  && *argv[i] <= 57)
{
r += atoi(argv[i]);
}
else
{
printf("Error\n");
return (1);
break;
}
}
printf("%d\n", r);
}
else
{
printf("Error\n");
return (1);
}
return (0);
}
