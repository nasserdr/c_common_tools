#include "holberton.h"
#include <stdio.h>

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

	n = 0;

	while (*(s + n) != '\0')
	{
		n++;
	}

	while (n != -1)
	{
		_putchar(*(s + n));
		n--;
	}
	_putchar('\n');
}
