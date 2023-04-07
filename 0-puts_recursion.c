#include "main.h"

/**
 * _puts_recursion - print a string
 * @s:the string to print
 * Return: 0
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
		_putchar(*s);
	_putchar('\n');
	return;
}
