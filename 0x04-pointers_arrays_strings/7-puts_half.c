#include "holberton.h"
#include <stdio.h>

/**
 *  puts_half -  Prints half of the string s
 *
 * @s: pointer to a string
 *
 * Return: Nothing
 */

void puts_half(char *s)
{
	int n, i, len;

	n = 0;

	while (*(s + n) != '\0')
		n++;

	len = n;
	if (n % 2 == 0)
		n /= 2;
	else
		n = (n - 1) / 2;

	for (i = n; i < len; i++)
	{
		_putchar(*(s + i));
	}

	_putchar('\n');
}
