#include "holberton.h"

/**
 * _isalpha - Checks whether the argument is alphanumeric
 *
 * @c: input character
 *
 * Return:
 * 1 if @c is alphanumeric
 * 0 otherwise
 */

int _isalpha(int c)
{
	if (isalpha(c))
		return (1);
	else
		return (0);
}
