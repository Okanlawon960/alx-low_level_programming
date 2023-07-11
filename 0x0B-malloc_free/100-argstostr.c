#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * argstostr - function to concatenates all arguments
 *
 * @ac: parameter
 * @av: parameter
 *
 * Return: concatenated arguments
 */
char *argstostr(int ac, char **av)
{
	int i, j, length, index, total_length;
	char *concatenated;

	if (ac == 0 || av == NULL)
		return (NULL);

	total_length = 0;

	for (i = 0; i < ac; i++)
		total_length += strlen(av[i]) + 1;

	concatenated = malloc((total_length + 1) * sizeof(char));

	if (concatenated == NULL)
		return (NULL);

	index = 0;

	for (j = 0; j < ac; j++)
	{
		length = strlen(av[j]);
		strcpy(concatenated + index, av[j]);
		index += length;
		concatenated[index++] = '\n';
	}

	concatenated[total_length] = '\0';

	return (concatenated);
}
