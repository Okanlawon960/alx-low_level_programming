#include "main.h"
#include <stdio.h>

/**
 * print_alphabet - Check the dir README
 */
void print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}

	_putchar('\n');
}
