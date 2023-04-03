#include "main.h"
#include <stdio.h>

/**
 * _srtcat - concatenates two strings
 * @dest: input value
 * @src: input value
 * Return: void
 */

char *_srtcat(char *dest, char *src)
{
	int dlen = 0, i;

	while (dest[dlen])
	{
		dlen++;
	}
	for (i = 0; src[i] != 0; i++)
	{
		dest[dlen] = src[i];
		dlen++;
	}
	dest[dlen] = '\0';
	return (dest);
}