#include "holberton.h"
#include <stdio.h>

#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _putchar(char c)
{
        return (write(1, &c, 1));
}

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
