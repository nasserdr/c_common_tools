#include "holberton.h"

/**
 * jack_bauer - compute the absolute value of a number
 *
 * Return: Nothing.
 */

void jack_bauer(void)
{

	int i, j, k, l, maxminutes;

	for (i = 0; i <= 2; i++)
	{
		if (i != 2)
			maxminutes = 9;
		else
			maxminutes = 3;
		for (j = 0; j <= maxminutes; j++)
			for (k = 0; k <= 5; k++)
				for (l = 0; l <= 9; l++)
				{
					_putchar(i + '0');
					_putchar(j + '0');
					_putchar(':');
					_putchar(k + '0');
					_putchar(l + '0');
					_putchar('\n');
				}
	}
}
