#include "main.h"

/**
 * _islower - this function checks for lowercases
 * @c: the variable that holds the alphabets
 * Return: (1) is lowercase (0) if otherwise
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
