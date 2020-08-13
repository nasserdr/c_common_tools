#include "holberton.h"

/**
 * times_table - Print the 9 times tables starting from 9
 *
 * Return: Nothing
 */

void times_table(void)
{

	int i, j, m;

	for (i = 0; i < 10; i++)
	{
		_putchar('0');
		_putchar(',');
		for (j = 1; j < 10; j++)
		{
			m = i * j;
			if (m < 10)
			{
				_putchar(' ');
				_putchar(m + '0');
			}
			else
			{
			_putchar(m / 10 + '0');
			_putchar(m % 10 + '0');
			}
			if (j != 9)
				_putchar(',');
		}
		_putchar('\n');
	}
}
