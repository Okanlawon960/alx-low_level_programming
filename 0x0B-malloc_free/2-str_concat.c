#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - function to create array
 *
 * @s1: parameter
 * @s2: parameter
 *
 * Return: pointer
 */
char *str_concat(char *s1, char *s2)
{
	size_t length_s1, length_s2;
	char *concatenated;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	length_s1 = strlen(s1);
	length_s2 = strlen(s2);

	concatenated = malloc((length_s1 + length_s2 + 1) * sizeof(char));
	if (concatenated == NULL)
		return (NULL);

	strcpy(concatenated, s1);
	strcat(concatenated, s2);

	return (concatenated);
}
