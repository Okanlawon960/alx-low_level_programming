#include "main.h"
#include <stdio.h>

/**
 * print_last_digit - Check the dir README
 *
 * @n: The character to check
 *
 * Return: Last digit
 */

int print_last_digit(int n)
{
	int lastDigit;

	lastDigit = n % 10;

	if (lastDigit < 0)
		lastDigit = -lastDigit;

	_putchar(lastDigit + '0');

	return (lastDigit);
}
