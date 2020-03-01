
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

int r;
int i, j;

r = 0;
if (argc < 2)
{
printf("0\n");
}
else
{
for (i = 1; i < argc; i++)
{
j = 0;
while (argv[i][j] != '\0')
{
if (argv[i][j] < 48 || argv[i][j] > 59)
{
printf("Error\n");
return (1);
}
j++;
}
r = r + atoi(argv[i]);
}
printf("%i\n", r);
}
return (0);
}
