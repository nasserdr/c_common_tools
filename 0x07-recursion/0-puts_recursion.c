#include "holberton.h"
#include <stdio.h>

/**
 * _puts_recursion -  prints the string s
 *
 * @s: the source string
 *
 * Return: nothing
 */

void _puts_recursion(char *s)
{
	_puts_chars(s);
	_putchar('\n');
}


/**
 * _puts_chars -  prints the string s
 *
 * @s: the source string
 *
 * Return: nothing
 */

void _puts_chars(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		s = s + 1;
		_puts_chars(s);
	}

}
