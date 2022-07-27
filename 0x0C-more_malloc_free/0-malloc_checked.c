#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - function that allocates memory using malloc
 * @b: - Unsigned int for number of blocks of memory
 * Return: pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *c;

	c = malloc(b);

	if (c == NULL)
		exit(98);

	return (c);
}
