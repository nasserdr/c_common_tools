#include "holberton.h"
#include <stdio.h>

/**
 * _puts -  Prints the string s
 *
 * @s: pointer to a string
 *
 * Return: Nothing
 */

void _puts(char *s)
{
	int n;
 	n = 0;

	while (*(s + n) != '\0')
	{
		_putchar(*(s+n));
	        n++;
	}
	_putchar('\n');

}
