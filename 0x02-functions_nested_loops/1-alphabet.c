#include "holberton.h"

/**
 * print_alphabet - prints the letters of the alphabet
 *
 * Return: Nothing
 */


void print_alphabet(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}
