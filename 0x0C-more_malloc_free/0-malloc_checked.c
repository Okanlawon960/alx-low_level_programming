#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - allocate memnory
 *
 * @b: parameter
 *
 * Return: pointer
 */
void *malloc_checked(unsigned int b)
{
	void *memory;

	memory = malloc(b);

	if (memory == NULL)
		exit(98);

	return (memory);
}
