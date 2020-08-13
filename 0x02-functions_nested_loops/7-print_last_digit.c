#include "holberton.h"

/**
 * print_last_digit - compute the absolute value of a number
 *
 * @c: input character
 *
 * Return:
 * The last digit of the number
 */

int print_last_digit(int c)
{
	int r;

	if (c < 0) c *= -1;
	r = c % 10;
	_putchar(r+'0');
	return r;
}
