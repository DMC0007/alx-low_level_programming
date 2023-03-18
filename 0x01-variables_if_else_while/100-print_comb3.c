#include <stdio.h>
/**
 * main - Entry point
 * Return: 0 (Success)
 */
int main(void)
{
	int c;
	int d;

	for (c = 0; c < 10; c++)
	{
		for (d = 1; d < 10; d++)
		{
			if (c < d && c != d)
			{
				putchar(c + '0');
				putchar(d + '0');
				if (c + d != 17)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
