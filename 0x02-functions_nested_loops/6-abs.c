#include "main.h"

/**
 * _abs - it computes the value of an integer
 * @a: the integer variable
 * Return: (a)
 */
int _abs(int a)
{
	if (a < 0)
		a = -(a);
	else if (a > 0)
		a = a;
	return (a);
}
