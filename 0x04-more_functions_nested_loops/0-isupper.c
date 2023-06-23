#include "main.h"
#include <ctype.h>

/**
 * _isupper - Kindly refer to the dir README file
 *
 * @c: The letter pass to the function
 *
 * Return: Returns 1 if c is uppercaase and 0 if otherwise
 */

int _isupper(int c)
{
	if (isupper(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
