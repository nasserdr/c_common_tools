#include "holberton.h"

/**
 * _islower - Checks whether the argument is lower case
 *
 * @c: input character
 *
 * Return:
 * 1 if @c is lower case
 * 0 otherwise
 */

int _islower(int c)
{
	if (islower(c))
		return (1);
	else
		return (0);
}
