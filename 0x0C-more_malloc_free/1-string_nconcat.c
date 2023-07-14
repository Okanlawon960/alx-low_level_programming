#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - concatenate string
 *
 * @s1: parameter 1
 * @s2: parameter 2
 * @n: parameter 3
 *
 * Return: the concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *result;
	unsigned int length = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	length = strlen(s2);

	if (n >= length)
		n = length;

	result = malloc(sizeof(char) * (strlen(s1) + n + 1));

	if (result == NULL)
		return (NULL);

	strcpy(result, s1);
	strncat(result, s2, n);

	result[strlen(s1) + n] = '\0';

	return (result);
}
