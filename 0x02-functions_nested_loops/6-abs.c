#include "holberton.h"

/**
 * _abs - compute the absolute value of a number
 *
 * @c: input character
 *
 * Return:
 * c if @c is bigger than 0
 * -c otherwise
 */

int _abs(int c)
{
	if (c > 0)
		return (c);
	else
		return (-1 * c);
}
