#include "holberton.h"
#include <stdio.h>
#include <string.h>

/**
 * print_rev -  Prints the string s in reverse
 *
 * @s: pointer to a string
 *
 * Return: Nothing
 */

void print_rev(char *s)
{
	int n;

	n = strlen(s);
	while (n != -1)
	{
		_putchar(*(s + n));
		n--;
	}
	_putchar('\n');
}
