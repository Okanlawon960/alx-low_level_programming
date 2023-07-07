#include "main.h"
#include <string.h>

/**
 * _pow_recursion - X raised to the power of y
 *
 * @x: Number 1 parameter passed to the function
 * @y: Number 2 parameter passed to the function
 *
 * Return: Returns the value
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}
