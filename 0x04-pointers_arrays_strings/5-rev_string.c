#include "holberton.h"
#include <stdio.h>

/**
 * rev_string - Reverses a string
 *
 * @s: pointer to a string
 *
 * Return: Nothing
 */

void rev_string(char *s)
{
	int n, len, i;
	char tmp1, tmp2;

	n = 0;

	while (*(s + n) != '\0')
	{
		n++;
	}


	len = n - 1;

	for (i = 0; i <= len / 2; i++)
	{
		tmp1 = *(s + i);
		tmp2 = *(s + len - i);
		*(s + i) = tmp2;
		*(s + len - i) = tmp1;
	}
	_putchar('\n');
}
