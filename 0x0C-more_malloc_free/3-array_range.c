#include "main.h"

/**
 * array_range - carete an array of intergers
 *
 * @min: parameter 1
 * @max: parameter 2
 *
 * Return: Return void pointer
 */
int *array_range(int min, int max)
{
	int *memory, i, length;

	if (min > max)
		return (NULL);

	length = (max - min) + 1;

	memory = malloc(sizeof(int) * length);

	if (memory == NULL)
		return (NULL);

	for (i = 0; i < length; i++)
	{
		memory[i] = min++;
	}

	return (memory);
}
