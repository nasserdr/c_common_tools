#include "holberton.h"

/**
 * print_sign - Checks whether the argument is alphabetic
 *
 * @c: input character
 *
 * Return:
 * 1 if @c is positive
 * -1 if @c is negative
 * 0 if @c is zero
 */

int print_sign(int c)
{
	if (c > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (c < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
