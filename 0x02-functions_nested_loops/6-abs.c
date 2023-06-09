#include "main.h"
#include <stdio.h>

/**
 * _abs - Compute the absolute value of an integer
 * @c: The number to be computed
 * Return: 0 (Success)
 */

int _abs(int c)
{
	if (c < 0)
	{
		int abs_val;

		abs_val = c * -1;
		return (abs_val);
	}
	return (c);
}
