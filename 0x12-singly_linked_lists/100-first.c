#include "lists.h"

void __attribute__((constructor)) tortoise();

/**
 * tortoise - prints before main
 * Return: Null
 */
void tortoise(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
