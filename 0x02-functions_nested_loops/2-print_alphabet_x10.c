#include "holberton.h"

/**
 * print_alphabet_x10 - prints the letters of the alphabet 10 times
 *
 * Return: Nothing
 */


void print_alphabet_x10(void)
{
	char a;
	int i;

	for (i = 0; i < 10; i++)
	{

		for (a = 'a'; a <= 'z'; a++)
		{
			_putchar(a);
		}
		_putchar('\n');
	}
}
