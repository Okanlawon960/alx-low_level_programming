#include "main.h"
#include <stdio.h>

/**
 * print_alphabet_x10 - Check the dir README
 */
void print_alphabet_x10(void)
{
	int i;
	char letter = 'a';

	for (i = 0; i < 10; i++)
	{
		letter = 'a';
		while (letter <= 'z')
		{
			_putchar(letter);
			letter++;
		}

		_putchar('\n');
	}
}
