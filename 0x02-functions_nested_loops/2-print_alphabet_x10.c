#include "main.h"

/**
 * print_alphabet_x10 - Print the alphabets 10 times.
 * Return: void (Success)
 */

void print_alphabet_x10(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
