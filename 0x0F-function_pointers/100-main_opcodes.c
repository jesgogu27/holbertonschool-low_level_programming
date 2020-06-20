#include <stdio.h>
#include <stdlib.h>

void opcodes(char *ptr, int number_of_bytes);

/**
 * main - prints the opcodes
 * @argc: number of arguments
 * @argv: array of pointers to arguments
 *
 * Return: always O
 */

int main(int argc, char **argv)
{
	int number_of_bytes;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	number_of_bytes = atoi(argv[1]);

	if (number_of_bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	opcodes((char *)&main, number_of_bytes);
	return (0);

}

/**
 * opcodes - print the opcodes
 * @ptr: pointer to the main function
 * @number_of_bytes: number of bytes to print
 *
 * Return: void
 */

void opcodes(char *ptr, int number_of_bytes)
{
	int count = 0;

	while (count < number_of_bytes)
	{
		printf("%.2hhx", ptr[count]);
		if (count < number_of_bytes - 1)
		{
			printf(" ");
		}
		count++;
	}
	printf("\n");

}
