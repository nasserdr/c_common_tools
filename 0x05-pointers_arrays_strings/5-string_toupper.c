#include "holberton.h"
#include <stdio.h>

/**
 * string_toupper - Change all letters to capital letters
 *
 * @s: the string
 *
 * Return: the string in uppercase
 */

char *string_toupper(char *s)
{
	int i;

	i = 0;
	while (*(s + i) != '\0')
	{
		if (*(s + i) >= 'a' && *(s + i) <= 'z')
			*(s + i) = *(s + i) - 32;
		i++;
	}

	return (s);
}
