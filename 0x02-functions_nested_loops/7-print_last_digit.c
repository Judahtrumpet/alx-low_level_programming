#include "main.h"

/**
 * print_last_digit - this function prints the last digit of a number
 * @a: the variable that holds the number
 * Return: returns the the value of the last digit (k)
 */
int print_last_digit(int a)
{
	int k;

	k = a % 10;
	if (a < 0)
		k = -k;
	_putchar(k + '0');
	return (k);
}
