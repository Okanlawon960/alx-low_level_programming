#include "main.h"
#include <string.h>

/**
 * _puts_recursion - Print string
 *
 * @s: Pinter to string to print
 *
 * Return: nothing
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	{
		_putchar('\n');
	}
}
