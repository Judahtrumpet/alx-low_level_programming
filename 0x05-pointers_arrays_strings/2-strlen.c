#include "main.h"
/**
 * _strlen - count the lenghts of strings
 * @s: string
 * Return: the lenght of string
 */
int _strlen(char *s)
{
	int i;
	int j = 0;

	for (i = 0 ; s[i] != '\0' ; i++)
	{
		j++;
	}
	return (j);
}
