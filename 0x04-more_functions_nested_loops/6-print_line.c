#include "main.h"

/**
 * print_line - Kindly refer to the dir README file
 */

void print_line(int n)
{
	int i;

	if (n != 0 && n > 0)
	{
		for (i = 0; i <= n; i++)
		{
			_putchar('_');
		}

		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
