#include "main.h"

/**
 * swap_int - Kindly refer to the dir README file
 *
 * @a: First Value
 *
 * @b: Second Valud
 *
 */
void swap_int(int *a, int *b)
{
	int firstValue = *a;
	int secondValue = *b;

	*a = secondValue;
	*b = firstValue;
}
