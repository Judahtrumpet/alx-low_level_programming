#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: is 0
 */
int main(void)
{
	int i;
	char g;

	for (i = 0 ; i < 10 ; i++)
		putchar(i + '0');
	for (g = 'a' ; g <= 'f' ; g++)
		putchar(g);
	putchar('\n');

	return (0);
}
