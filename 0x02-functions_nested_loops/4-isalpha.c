#include "main.h"

/**
 * _isaplha - For alphabetic character.
 * @c: The character to be checked.
 * Return: 1 for lowercase or uppercase, or 0 otherwise.
 */

int _isalpha(int c);
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
	return (1);
	}
	return (0);
}
