#include "main.h"

/**
 * _calloc - allocate memnory for an array
 *
 * @nmemb: parameter 1
 * @size: parameter 2
 *
 * Return: Return void pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *memory;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	memory = malloc(nmemb * size);

	if (memory == NULL)
		return (NULL);

	for (i = 0; i < (nmemb * size); i++)
		memory[i] = 0;

	return (memory);
}
