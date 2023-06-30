#include "main.h"
#include <string.h>

/**
 * _strcat - Refer to the project README
 *
 * @dest: First string as parameter
 * @src: Second string as parameter
 *
 * Return: Return dest
 */
char *_strcat(char *dest, char *src)
{
	char *dest_ptr = dest;
	const char *src_ptr = src;

	while (*dest_ptr != '\0')
	{
		dest_ptr++;
	}

	while (*src_ptr != '\0')
	{
		*dest_ptr = *src_ptr;
		dest_ptr++;
		src_ptr++;
	}

	*dest_ptr = '\0';

	return (dest);
}
