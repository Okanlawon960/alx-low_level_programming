#include "main.h"
#include <string.h>

/**
 * factorial - Print string length
 *
 * @n: Number parameter passed to the function
 *
 * Return: Returns the number
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);

	return (n * factorial(n - 1));
}
