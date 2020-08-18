#include "holberton.h"
#include <stdio.h>

/**
 * cap_string - Change all letters to capital letters
 *
 * @s: the string
 *
 * Return: the string in uppercase
 */

char *cap_string(char *s)
{
	int i;
	char c;

	i = 0;
	while (*(s + i) != '\0')
	{
		c = *(s + i);
		if (c >= 'a' && c <= 'z')
			*(s + i) = *(s + i) - 32;
		i++;
	}

	return (s);
}
