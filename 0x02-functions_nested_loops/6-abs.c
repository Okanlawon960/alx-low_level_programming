#include "main.h"
#include <stdio.h>

/**
 * _abs - Check the dir README
 *
 * @n: The character to check
 *
 * Return: 1 if sign is +, 0 if sign is 0 and -1 if sign is -
 */

int _abs(int n)
{
	if (n < 0)
	{
		return (-n);
	}
	else
	{
		return (n);
	}
}
