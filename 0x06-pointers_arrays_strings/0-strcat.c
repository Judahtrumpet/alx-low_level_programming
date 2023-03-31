#include "main.h"

/**
 * _strcat - concatrates two strings
 * @dest: first string
 * @src: second string
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int destlen;
	int srclen;
	int i;

	for (i = 0 ; dest[i] != '\0' ; i++)
		destlen++;
	for (i = 0 ; src[i] != '\0' ; i++)
		srclen++;
	for (i = 0 ; i <= srclen ; i++)
		dest[destlen + i] = src[i];
	return (dest);
}
