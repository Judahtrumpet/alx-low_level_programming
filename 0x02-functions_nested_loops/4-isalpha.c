#include "main.h"

/**
 * _isalpha - the function checks for alphabbets character
 * @c: the variable that holds the charater
 * Return: (1) if it is in lowercase or uppercase, (0) if otherwise
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
