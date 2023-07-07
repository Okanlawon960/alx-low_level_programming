#include "main.h"
#include <string.h>

/**
 * _strlen_recursion - Print string length
 *
 * @s: Pointer to string
 *
 * Return: Returns the length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s)
	{
		return (1 + _strlen_recursion(s + 1));
	}
	else
	{
		return (0);
	}
}
