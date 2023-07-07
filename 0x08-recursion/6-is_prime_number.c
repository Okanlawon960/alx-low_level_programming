#include "main.h"
#include <string.h>

/**
 * check_prime - check all number < n if they can divide it
 *
 * @n: int
 * @resp: int
 *
 * Return: int
 */

int check_prime(int n, int resp)
{

	if (resp >= n && n > 1)
		return (1);
	else if (n % resp == 0 || n <= 1)
		return (0);
	else
		return (check_prime(n, resp + 1));
}


/**
 * is_prime_number - Check for prime number
 *
 * @n: Parameter
 *
 * Return: Returns 1 if it prime number otherwise 0
 */
int is_prime_number(int n)
{
	return (check_prime(n, 2));
}
