#include "holberton.h"

/**
 * _isalpha - Checks whether the argument is alphabetic
 *
 * @c: input character
 *
 * Return:
 * 1 if @c is alphabetic
 * 0 otherwise
 */

int _isalpha(int c)
{
	if ((c <= 'z' && c >= 'a') || (c <= 'Z' && c >= 'A'))
		return (1);
	else
		return (0);
}
