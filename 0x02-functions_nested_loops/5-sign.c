#include "main.h"

/**
 * print_sign - prints numerical signs
 * @n: the varaible
 * Return: return 1 if positive, 0 if it equals to and -1 if it is negative
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	return (0);
}
