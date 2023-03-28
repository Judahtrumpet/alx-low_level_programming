#include "main.h"
/**
 * swap_int - swap two values
 * @a: value a
 * @b: value b
 */
void swap_int(int *a, int *b)
{
	int j;

	j = *a;
	*a = *b;
	*b = j;
}
