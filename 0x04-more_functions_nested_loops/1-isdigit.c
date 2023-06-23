#include "main.h"
#include <ctype.h>

/**
 * _isdigit - Kindly refer to the dir README file
 *
 * @c: The letter pass to the function
 *
 * Return: Returns 1 if c is a digit and 0 if otherwise
 */

int _isdigit(int c)
{
	if (isdigit(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
