#include "holberton.h"
#include <stdio.h>

/**
 * puts2 -  Prints every other character the string s
 *
 * @s: pointer to a string
 *
 * Return: Nothing
 */

void puts2(char *s)
{
	int n;

	n = 0;
	while (*(s + n) != '\0')
	{
		if ((n % 2) == 0)
			_putchar(*(s + n));
		n++;

	}
	_putchar('\n');

}
