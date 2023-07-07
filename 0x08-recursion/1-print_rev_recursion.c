#include "main.h"
#include <string.h>

/**
 * _print_rev_recursion - Print string in reverse
 *
 * @s: Ponter to string
 *
 * Return: nothing
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
