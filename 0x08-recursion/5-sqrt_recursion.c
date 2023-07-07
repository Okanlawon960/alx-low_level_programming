#include "main.h"

/**
 * _sqrt_helper -  find square root
 *
 * @n: Int to find square root
 * @guess: initial guess of 0
 *
 * Return: Int
 */

int _sqrt_helper(int n, int guess)
{
	int square = guess * guess;

	if (square == n)
		return (guess);
	else if (square > n || guess * guess < 0)
		return (-1);

	return (_sqrt_helper(n, guess + 1));
}

/**
 * _sqrt_recursion - Natural square root of a number
 *
 * @n: Number parameter passed to the function
 *
 * Return: Returns the value
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (_sqrt_helper(n, 0));
}
